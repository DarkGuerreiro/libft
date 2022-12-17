/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 23:21:09 by arosa-de          #+#    #+#             */
/*   Updated: 2022/12/17 01:24:11 by arosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks for any printable character including space
int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}