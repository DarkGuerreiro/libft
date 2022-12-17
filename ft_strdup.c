/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:30:57 by arosa-de          #+#    #+#             */
/*   Updated: 2022/12/17 02:13:28 by arosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Duplicate string s1
//Memory for the new string is obtained with malloc
//and can be freed with free
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s);
	ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s, len + 1);
	return (ptr);
}
