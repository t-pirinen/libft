/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:18:07 by tpirinen          #+#    #+#             */
/*   Updated: 2025/05/03 18:44:04 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Allocates memory (using malloc(3)) and returns a substring from the
	string ’s’. The substring starts at index ’start’ and has a
	maximum i of ’len’.												*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;

	if (!s)
		return (NULL);
	while (*s && start--)
		s++;
	i = 0;
	while (s[i] && i < len)
		i++;
	sub_str = ft_calloc(1, i + 1);
	if (sub_str)
		ft_memcpy(sub_str, s, i);
	return (sub_str);
}
