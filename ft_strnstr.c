/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:18:26 by tpirinen          #+#    #+#             */
/*   Updated: 2025/04/21 17:23:41 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (little[j] != '\0' && big[i + j] == little[j] && (i + j) < len)
				j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

#include <stdio.h>
#include <bsd/string.h>
int	main()
{
	const char	*big = "Foo Bar BaBaz";
	const char	*little = "";
	char		*strnstr_ptr;
	char		*ft_strnstr_ptr;

	strnstr_ptr = strnstr(big, little, 5);
	ft_strnstr_ptr = ft_strnstr(big, little, 5);
	printf("%s\n", strnstr_ptr);
	printf("%s", ft_strnstr_ptr);
}