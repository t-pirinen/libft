/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:28:01 by tpirinen          #+#    #+#             */
/*   Updated: 2025/04/21 13:44:17 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strrchar(const char *s, int c)
{
	char	*ptr;

	ptr = s;
	if (c == '\0')
	{
		while (*ptr)
			ptr++;
		return (ptr);
	}
	while (*ptr)
		ptr++;
	while (ptr != s)
	{
		if (*ptr == c)
			return (ptr);
		ptr--;
	}
	return (NULL);
}
