/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 23:21:04 by arosa-de          #+#    #+#             */
/*   Updated: 2022/12/17 01:19:46 by arosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Check for an alphanumeric character 
//It is equivalent to (ft_isalpha or ft_isdigit)
int	ft_isalnum(int c)
{
	return (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) || \
	(c >= '0' && c <= '9'));
}
