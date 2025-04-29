/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:55:05 by tpirinen          #+#    #+#             */
/*   Updated: 2025/04/29 13:15:17 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	err;

	if (!s)
		return ;
	while (*s)
	{
		err = write(fd, &*s++, 1);
		if (-1 == err)
		{
			write(2, "ft_putendl_fd error\n", 20);
			return ;
		}
	}
	err = write(fd, "\n", 1);
	if (-1 == err)
		write(2, "ft_putendl_fd error\n", 20);
}
