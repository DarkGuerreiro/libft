/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 05:14:54 by arosa-de          #+#    #+#             */
/*   Updated: 2022/12/17 02:14:49 by arosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Applies the function ’f’ on each character of the string passed as argument
//passing its index as first argument
//Each character is passed by address to ’f’ to be modified if necessary
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s && s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
