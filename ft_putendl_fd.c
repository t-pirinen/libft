/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:55:05 by tpirinen          #+#    #+#             */
/*   Updated: 2025/05/03 17:44:41 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Writes the given string 's' and an endline '\n' to the given
	file descriptor 'fd'.													*/
void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		write(fd, &*s++, 1);
	write(fd, "\n", 1);
}
