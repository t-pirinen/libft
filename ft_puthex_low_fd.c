/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_low_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 23:15:10 by tpirinen          #+#    #+#             */
/*   Updated: 2025/05/17 00:27:54 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static ssize_t	ft_puthexlowfd(uintptr_t n, int fd)
{
	ssize_t		chars_printed;

	chars_printed = 0;
	if (n >= 16)
		chars_printed += ft_puthexlowfd(n / 16, fd);
	chars_printed += write(fd, &HEX_LOWER[n % 16], 1);
	return (chars_printed);
}

ssize_t		ft_puthex_low_fd(uintptr_t n, int fd)
{
	if (n == 0)
		return (write(fd, "0", 1));
	return (ft_puthexlowfd(n, fd));
}