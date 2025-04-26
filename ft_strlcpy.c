/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:49:57 by tpirinen          #+#    #+#             */
/*   Updated: 2025/04/26 18:25:38 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	i;

	j = 0;
	i = 0;
	if (!dst || !src)
		return (0);
	if (size > 0)
	{
		while (src[j] != '\0')
		{
			if (i < size - 1)
			{
				dst[i] = src[j];
				i++;
			}
			j++;
		}
		dst[i] = '\0';
	}
	while (src[j] != '\0')
		j++;
	return (j);
}
