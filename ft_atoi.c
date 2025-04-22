/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:25:51 by tpirinen          #+#    #+#             */
/*   Updated: 2025/04/22 17:12:46 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	size_t	sign;
	size_t	value;

	i = 0;
	sign = 1;
	value = 0;
	while (nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i++] == '-')
			sign = -1;
	}
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (sign == 1 && value >= 214748364 && nptr[i] - '0' > 7)
			return (-1);
		if (sign == -1 && value >= 214748364 && nptr[i] - '0' > 8)
			return (-1);
		value = value * 10 + (nptr[i++] - 48);
	}
	if (nptr[i] == '-')
		value *= -1;
	return (value * sign);
}

#include <stdio.h>
#include <stdlib.h>
int	main()
{
	char	int_max[20] = "   2147483647";
	char	int_min[20] = "   -2147483648";
	char	int_max_over[20] = "   2147483648";
	char	int_min_under[20] = "   -2147483649";
	

	printf ("ft_int_max %d\n", ft_atoi(int_max));
	printf ("int_max %d\n\n", atoi(int_max));
	printf ("ft_int_min %d\n", ft_atoi(int_min));
	printf ("int_min %d\n\n", atoi(int_min));
	printf ("ft_int_max_over %d\n", ft_atoi(int_max_over));
	printf ("int_max_over %d\n\n", atoi(int_max_over));
	printf ("ft_int_min_over %d\n", ft_atoi(int_min_under));
	printf ("int_min_over %d\n\n", atoi(int_min_under));
}
