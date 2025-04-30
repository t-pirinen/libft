/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:19:53 by tpirinen          #+#    #+#             */
/*   Updated: 2025/04/30 14:44:22 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_count_len(int n)
{
	size_t	len;

	len = 1;
	if (n >= 0)
	{
		while (n > 9)
		{
			n = n / 10;
			len++;
		}
		return (len);
	}
	else
	{
		if (n == INT_MIN)
			return (11);
		len++;
		n = -n;
		while (n > 9)
		{
			n /= 10;
			len++;
		}
		return (len);
	}
}

static void	ft_assign(char *str, int n, size_t len)
{
	if (n < 10)
		str[len] = n + '0';
	else
	{
		ft_assign(str, (n / 10), (len - 1));
		str[len] = (n % 10) + '0';
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	str = NULL;
	len = ft_count_len(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == INT_MIN)
	{
		str[0] = '-';
		str[1] = '2';
		n = 147483648;
	}
	else if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	ft_assign(str, n, len - 1);
	return (str);
}
