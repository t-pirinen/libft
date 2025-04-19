/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:01:52 by tpirinen          #+#    #+#             */
/*   Updated: 2025/04/18 17:46:39 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char	*csrc;
	char	*cdest;

	cdest = (char *)dest;
	csrc = (char *)src;
	size_t	i;
	if(!dest && !src)
		return(0);
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
		i = n - 1;
		while (i > 0)
		{
			cdest[i] = csrc[i];
			i--;
		}
	}
	return(dest);
}