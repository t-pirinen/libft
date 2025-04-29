/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:26:30 by tpirinen          #+#    #+#             */
/*   Updated: 2025/04/29 13:16:17 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	err;

	if (!s)
		return ;
	while (*s)
	{
		err = write(fd, &*s++, 1);
		if (err == -1)
		{
			write(2, "ft_putstr_fd error\n", 19);
			return ;
		}
	}
}
