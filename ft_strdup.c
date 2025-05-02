/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:41:23 by tpirinen          #+#    #+#             */
/*   Updated: 2025/05/02 15:55:16 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Returns a pointer to a new string which is a duplicate of the string 's'.
	Memory for the new string is obtained with malloc(3), and can be freed
	with free(3)															*/
char	*ft_strdup(const char *s)
{
	char	*dup_str;
	size_t	s_len;
	size_t	i;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	dup_str = malloc(s_len + 1);
	if (dup_str == NULL)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		dup_str[i] = s[i];
		i++;
	}
	dup_str[i] = '\0';
	return (dup_str);
}
