/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 22:46:20 by tpirinen          #+#    #+#             */
/*   Updated: 2025/05/17 02:02:57 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static ssize_t	ft_printaddress(uintptr_t n, int fd);
static ssize_t	ft_printhex(uintptr_t n, int fd);

ssize_t		ft_putptr_fd(void *ptr, int fd)
{
	ssize_t		chars_printed;

	chars_printed = write(fd, "0x", 2);
	if (chars_printed == -1)
		return (-1);
	chars_printed += ft_printaddress((uintptr_t)ptr, fd);
	return (chars_printed);
}

static ssize_t	ft_printaddress(uintptr_t n, int fd)
{
	if (n == 0)
		return (write(fd, "0", 1));
	return (ft_printhex(n, fd));
}

static ssize_t	ft_printhex(uintptr_t n, int fd)
{
	ssize_t		chars_printed;

	chars_printed = 0;
	if (n >= 16)
		chars_printed += ft_printhex(n / 16, fd);
	chars_printed += write(fd, &HEX_LOWER[n % 16], 1);
	return (chars_printed);
}
