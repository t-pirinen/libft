/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:18:07 by tpirinen          #+#    #+#             */
/*   Updated: 2025/04/24 17:57:22 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;

	if (!s || start >= ft_strlen(s))
		return (sub_str = "");
	sub_str = malloc(len + 1);
	if (!sub_str)
		return (NULL);
	while (len-- > 0 && s[start + i])
	{
		sub_str[i++] = s[start + i];
	}
	sub_str[i] = '\0';
	return (sub_str);
}
