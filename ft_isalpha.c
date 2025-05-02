/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:52:26 by tpirinen          #+#    #+#             */
/*   Updated: 2025/05/02 14:47:05 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Returns a non-zero value if 'c' is alphabetic. Otherwise returns 0.		*/
int	ft_isalpha(int c)
{
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
		return (1024);
	else
		return (0);
}
