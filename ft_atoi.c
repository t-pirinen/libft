/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:25:51 by tpirinen          #+#    #+#             */
/*   Updated: 2025/05/08 12:03:27 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Takes a pointer to a string and converts the initial portion of the
	string to int, skipping the whitespaces at the beginning.				*/
int	ft_atoi(const char *nptr)
{
	size_t	i;
	size_t	value;
	int		sign;

	i = 0;
	sign = 1;
	value = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if ((nptr[i] == '-' || nptr[i] == '+') && nptr[i++] == '-')
		sign = -1;
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (sign == 1 && value >= 214748364 && nptr[i] - '0' > 7)
			return (-1);
		if (sign == -1 && value >= 214748364 && nptr[i] - '0' > 8)
			return (-1);
		value = value * 10 + (nptr[i++] - 48);
	}
	return (value * sign);
}
