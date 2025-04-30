/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:55:05 by tpirinen          #+#    #+#             */
/*   Updated: 2025/04/29 17:34:36 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		if (write(fd, &*s++, 1) == -1)
		{
			write(2, "ft_putendl_fd error\n", 20);
			return ;
		}
	}
	if (write(fd, "\n", 1) == -1)
		write(2, "ft_putendl_fd error\n", 20);
}
