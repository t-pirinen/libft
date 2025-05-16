/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_ret.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:26:30 by tpirinen          #+#    #+#             */
/*   Updated: 2025/05/15 19:35:52 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Writes the given string 's' to the given file descriptor 'fd'.			*/
ssize_t	ft_putstr_fd_ret(char *s, int fd)
{
	if (s)
		return (write(fd, s, ft_strlen(s)));
	else
		return (-1);
}
