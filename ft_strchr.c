/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:17:11 by tpirinen          #+#    #+#             */
/*   Updated: 2025/04/21 13:34:11 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strchr(const char *s, int c)
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
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
