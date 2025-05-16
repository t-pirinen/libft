/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_ret.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:09:33 by tpirinen          #+#    #+#             */
/*   Updated: 2025/05/15 19:34:15 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Writes the given integer 'n' to the given file descriptor 'fd' and
	returns the number of chars printed.									*/
ssize_t	ft_putnbr_fd_ret(int n, int fd)
{
	char	c;
	ssize_t	chars_printed;

	chars_printed = 0;
	if (n == -2147483648)
		return (write(fd, "-2147483648", 11));
	if (n < 0)
	{
		chars_printed += write(fd, "-", 1);
		n = -n;
	}
	if (n > 9)
		chars_printed += ft_putnbr_fd_ret(n / 10, fd);
	c = (n % 10) + '0';
	chars_printed += write(fd, &c, 1);
	return (chars_printed);
}
