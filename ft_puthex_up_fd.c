/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_up_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 00:51:04 by tpirinen          #+#    #+#             */
/*   Updated: 2025/05/17 05:08:16 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*  Prints uppercase hexadecimal to file descriptor.                        */
static ssize_t	ft_puthexupfd(unsigned int n, int fd)
{
    ssize_t		chars_printed;
    ssize_t		err;

    chars_printed = 0;
    if (n >= 16)
	{
        err = ft_puthexupfd(n / 16, fd);
        if (err == -1)
            return (-1);
        chars_printed += err;
    }
    if ((err = write(fd, &HEX_UPPER[n % 16], 1)) == -1)
     	return (-1);
    chars_printed += err;
    return (chars_printed);
}

ssize_t		ft_puthex_up_fd(unsigned int n, int fd)
{
	return (ft_puthexupfd(n, fd));
}
