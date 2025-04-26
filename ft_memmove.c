/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:01:52 by tpirinen          #+#    #+#             */
/*   Updated: 2025/04/26 18:24:50 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*csrc;
	unsigned char	*cdest;
	size_t			i;

	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	if (!dest || !src)
		return (dest);
	if (cdest <= csrc)
	{
		i = 0;
		while (i < n)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i-- > 0)
			cdest[i] = csrc[i];
	}
	return (dest);
}
