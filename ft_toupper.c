/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 23:21:11 by arosa-de          #+#    #+#             */
/*   Updated: 2022/12/17 02:35:01 by arosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//If the character passed as an argument is a lowercase, convert to upper
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
