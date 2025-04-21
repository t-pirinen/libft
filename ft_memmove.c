/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:01:52 by tpirinen          #+#    #+#             */
/*   Updated: 2025/04/21 17:23:41 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*csrc;
	unsigned char	*cdest;
	size_t	i;

	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	if (!dest && !src)
		return (0);
	if (cdest <= csrc)
	{
		i = 0;
		while (i < n)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	i = n - 1;
	while (i > 0)
	{
		cdest[i] = csrc[i];
		i--;
	}
	return (dest);
}
