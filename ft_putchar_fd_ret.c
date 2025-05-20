/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_ret.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:21:43 by tpirinen          #+#    #+#             */
/*   Updated: 2025/05/20 17:54:20 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Writes character 'c' to the given file descriptor and returns
	number of digits written.												*/
ssize_t	ft_putchar_fd_ret(int c, int fd)
{
	return (write(fd, &c, 1));
}
