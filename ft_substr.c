/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 03:13:11 by arosa-de          #+#    #+#             */
/*   Updated: 2022/12/17 02:33:04 by arosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates (with malloc(3)) and returns a substring from the string ’s’
//The substring begins at index ’start’ and is of maximum size ’len
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	tamanho_max_sub;

	if (!s)
		return (NULL);
	i = ft_strlen((char *)s);
	if (start > i)
	{
		sub = ft_calloc(1, 1);
		return (sub);
	}
	tamanho_max_sub = (i - (int)start);
	if (len > tamanho_max_sub)
		sub = (char *)malloc(sizeof(char) * tamanho_max_sub + 1);
	else
		sub = (char *)malloc((sizeof(char) * (len + 1)));
	if (!sub)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
		sub[i++] = ((unsigned char *)s)[start++];
	sub[i] = '\0';
	return (sub);
}
