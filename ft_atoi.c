/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:25:51 by tpirinen          #+#    #+#             */
/*   Updated: 2025/04/21 18:56:28 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	size_t	value;

	i = 0;
	value = 0;
	if (nptr[0] == '-')
		i++;
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
		value = value * 10 + (nptr[i++] - 48);
	if (nptr[0] == '-')
		value *= -1;
	return (value);
}

#include <stdio.h>
#include <stdlib.h>
int	main()
{
	char	sstring[20] = "2147483647hi12";
	char	stringg[20] = "2147483647hi12";

	printf ("%d\n", ft_atoi(sstring));
	printf ("%d\n", atoi(stringg));
}