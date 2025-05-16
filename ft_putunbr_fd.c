/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 01:21:25 by tpirinen          #+#    #+#             */
/*   Updated: 2025/05/17 02:10:27 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Prints an unsigned int to file descriptor and returns number of
	chars printed.															*/
int	ft_putunbr_fd(unsigned int n, int fd)
{
	int	chars_printed;

	chars_printed = 0;
	if (n > 9)
	{
		chars_printed += ft_putunbr_fd(n / 10, fd);
		chars_printed += ft_putunbr_fd(n % 10, fd);
	}
	else
	{
		n += '0';
		chars_printed += write(fd, &n, 1);
	}
	return (chars_printed);
}
