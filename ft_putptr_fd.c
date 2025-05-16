/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 22:46:20 by tpirinen          #+#    #+#             */
/*   Updated: 2025/05/16 22:51:32 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t		ft_putptr_fd(void *p, int fd)
{
	unsigned char	*ptr;
	ssize_t	i;

	ptr = (unsigned char*)p;
	i = 0;
	while (ptr[i])
	{
		i += ft_putchar_fd_ret(ptr[i], fd);
	}
	return (i);
}