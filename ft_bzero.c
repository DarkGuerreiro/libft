/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:45:48 by arosa-de          #+#    #+#             */
/*   Updated: 2022/12/17 02:09:30 by arosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Erases the data in the "n" bytes of the memory starting 
//at the location pointed by "s" writing zeroes
#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
	{
		*p = 0;
		p++;
	}
}
