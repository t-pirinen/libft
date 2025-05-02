/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:30:55 by tpirinen          #+#    #+#             */
/*   Updated: 2025/05/02 14:47:46 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Returns a non-zero value if 'c' is numeric. Otherwise returns 0.		*/
int	ft_isdigit(int c)
{
	if (48 <= c && c <= 57)
	{
		return (2048);
	}
	else
	{
		return (0);
	}
}
