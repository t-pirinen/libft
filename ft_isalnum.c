/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:01:03 by tpirinen          #+#    #+#             */
/*   Updated: 2025/05/02 14:44:53 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Returns a non-zero value if 'c' is alphanumeric. Otherwise returns 0.	*/
int	ft_isalnum(int c)
{
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122) || (48 <= c && c <= 57))
		return (8);
	else
		return (0);
}
