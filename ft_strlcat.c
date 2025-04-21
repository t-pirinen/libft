/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:10:25 by tpirinen          #+#    #+#             */
/*   Updated: 2025/04/21 13:34:28 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size > 0)
	{
		while (dst[i])
		{
			i++;
		}
		while (j < size - 1 && src[i])
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		*dst = '\0';
	}
	return (i);
}
