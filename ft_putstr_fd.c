/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:26:30 by tpirinen          #+#    #+#             */
/*   Updated: 2025/05/02 15:19:08 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Writes the given string 's' to the given file descriptor 'fd'.			*/
void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		if (write(fd, &*s++, 1) == -1)
		{
			write(2, "ft_putstr_fd error\n", 19);
			return ;
		}
	}
}
