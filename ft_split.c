/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:10:48 by tpirinen          #+#    #+#             */
/*   Updated: 2025/04/26 20:24:28 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free_all()
{
	
}

static size_t	ft_count_str(char const *s, char c)
{
	size_t	str_count;
	size_t	i;

	str_count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i])
		{
			while (s[i] == c)
				i++;
		}
		if (s[i])
		{
			str_count++;
			while (s[i] && s[i] != c)
				i++;
		}
		i++;
	}
	return (str_count);
}

static void	*ft_str_fill(char **arr, char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i])
		{
			while (s[i] == c)
				i++;
		}
		if (s[i])
		{
			ft_str_alloc(arr[j][i], s, c, i);
		}
		i++;
	}
	return ();
}

static void	*ft_str_alloc(char **arr, char const *s, char c, size_t i)
{
	size_t	str_size;

	str_size = ft_strchr(&s[i], (int)c) - &s[i] + 1;
	if (str_size == NULL)
		str_size = ft_strlen(&s[i]);
	*arr = malloc(str_size + 1);
	if (!arr)
		return (NULL);
	return (**arr);
}


char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	str_count;


	str_count = ft_count_str(s, c);
	*arr = malloc(str_count * sizeof(char *) + sizeof(NULL));
	*arr[str_count] = NULL;

	ft_str_fill(**arr, s, c);

	
}
