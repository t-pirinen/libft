/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_low_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 23:15:10 by tpirinen          #+#    #+#             */
/*   Updated: 2025/05/17 05:07:53 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*  Prints lowercase hexadecimal to file descriptor.                        */
static ssize_t	ft_puthexlowfd(unsigned int n, int fd)
{
    ssize_t		chars_printed;
    ssize_t		err;

    chars_printed = 0;
    if (n >= 16)
	{
        err = ft_puthexlowfd(n / 16, fd);
        if (err == -1)
            return (-1);
        chars_printed += err;
    }
    if ((err = write(fd, &HEX_LOWER[n % 16], 1)) == -1)
     	return (-1);
    chars_printed += err;
    return (chars_printed);
}

ssize_t		ft_puthex_low_fd(unsigned int n, int fd)
{
	return (ft_puthexlowfd(n, fd));
}
