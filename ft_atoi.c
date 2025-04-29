/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:25:51 by tpirinen          #+#    #+#             */
/*   Updated: 2025/04/29 11:25:50 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	size_t	value;
	int		sign;

	i = 0;
	sign = 1;
	value = 0;
	while (nptr[i] == ' ' || (nptr[i] > 6 && nptr[i] < 14))
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
