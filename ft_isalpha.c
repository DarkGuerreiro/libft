/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 23:20:59 by arosa-de          #+#    #+#             */
/*   Updated: 2022/12/17 01:20:40 by arosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Check for a alpabetic character
//It is equivalent to (ft_isupper(c) or ft_islower(c))
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
