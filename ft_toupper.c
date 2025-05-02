/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:38:22 by tpirinen          #+#    #+#             */
/*   Updated: 2025/05/02 15:53:12 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	If character 'c' is a lowercase letter, turns it into a capital letter,
	otherwise returns the character.										*/
int	ft_toupper(int c)
{
	if (97 <= c && c <= 122)
		return (c - 32);
	else
		return (c);
}
