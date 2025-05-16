/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_up_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 00:51:04 by tpirinen          #+#    #+#             */
/*   Updated: 2025/05/17 01:39:17 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static ssize_t	ft_puthexupfd(unsigned int n, int fd)
{
	ssize_t		chars_printed;

	chars_printed = 0;
	if (n >= 16)
		chars_printed += ft_puthexupfd(n / 16, fd);
	chars_printed += write(fd, &HEX_UPPER[n % 16], 1);
	return (chars_printed);
}

ssize_t		ft_puthex_up_fd(unsigned int n, int fd)
{
	if (n == 0)
		return (write(fd, "0", 1));
	return (ft_puthexupfd(n, fd));
}
