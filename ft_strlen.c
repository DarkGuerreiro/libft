/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:38:55 by arosa-de          #+#    #+#             */
/*   Updated: 2022/12/17 02:18:06 by arosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Calculates the length of the string pointed to by s
//excluding the terminating null byte ('\0')
#include <unistd.h>

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
