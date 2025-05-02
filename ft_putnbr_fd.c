/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:09:33 by tpirinen          #+#    #+#             */
/*   Updated: 2025/05/02 15:05:30 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	err_checknprint(int fd, char c);

/*	Writes the given integer 'n' to the given file descriptor 'fd'.			*/
void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		err_checknprint(fd, '-');
		if (n == -2147483648)
		{
			err_checknprint(fd, '2');
			ft_putnbr_fd(147483648, fd);
			return ;
		}
		ft_putnbr_fd(-n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else if (n >= 0)
	{
		n += '0';
		err_checknprint(fd, n);
	}
}

static void	err_checknprint(int fd, char c)
{
	if (write(fd, &c, 1) == -1)
		write(2, "ft_putnbr_fd error\n", 19);
}
