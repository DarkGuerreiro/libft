/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 23:21:15 by arosa-de          #+#    #+#             */
/*   Updated: 2022/12/17 02:08:20 by arosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Locates the first occurrence of 'c' in the string pointed to by 's'
//The terminating null character is considered to be part of the string
//therefore if 'c' is '\0', locates the terminating '\0'
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr != '\0')
	{
		if (*ptr == (char)c)
			return (ptr);
		ptr++;
	}
	if (*ptr == (char)c)
		return (ptr);
	return (NULL);
}
