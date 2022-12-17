/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 23:21:13 by arosa-de          #+#    #+#             */
/*   Updated: 2022/12/17 02:35:15 by arosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//If the character passed as an argument is an uppercase, convert to lower
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
