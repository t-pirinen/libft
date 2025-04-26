/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:36:31 by tpirinen          #+#    #+#             */
/*   Updated: 2025/04/26 18:27:16 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinset(char const *set, char c)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static int	ft_startlen(char const *s1, char const *set)
{
	int		isinset;
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	isinset = ft_isinset(set, s1[0]);
	if (isinset == 0)
		return (0);
	i++;
	while (isinset != 0)
	{
		isinset = ft_isinset(set, s1[i]);
		len++;
		i++;
	}
	return (len);
}

static int	ft_endlen(char const *s1, char const *set)
{
	int		isinset;
	size_t	i;
	size_t	len;
	size_t	slen;

	len = 0;
	slen = ft_strlen(s1);
	i = slen - 1;
	isinset = ft_isinset(set, s1[i]);
	if (isinset == 0)
		return (0);
	i--;
	while (isinset != 0)
	{
		isinset = ft_isinset(set, s1[i]);
		len++;
		i--;
	}
	return (len);
}

static void	ft_cpystr(char *trim, char const *s1, size_t startl, size_t triml)
{
	size_t	i;

	i = 0;
	while (i < triml)
	{
		trim[i] = s1[startl + i];
		i++;
	}
	trim[i] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	i;
	size_t	triml;
	size_t	startl;
	size_t	endl;

	i = 0;
	startl = ft_startlen(s1, set);
	if (startl == ft_strlen(s1))
	{
		trim = malloc(1);
		trim[i] = '\0';
		return (trim);
	}
	endl = ft_endlen(s1, set);
	triml = ft_strlen(s1) - (startl + endl);
	trim = malloc(triml + 1);
	if (trim == NULL)
		return (NULL);
	ft_cpystr(trim, s1, startl, triml);
	return (trim);
}
