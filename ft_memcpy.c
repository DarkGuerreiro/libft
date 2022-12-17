/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 07:09:42 by arosa-de          #+#    #+#             */
/*   Updated: 2022/12/17 01:59:54 by arosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Copies n bytes from memory area src to memory of dst 
//The memory areas must not overlap
//Use ft_memmove if the memory areas do overlap
#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;

	count = 0;
	while ((count < n) && (dest != NULL || src != NULL))
	{
		((unsigned char *)dest)[count] = ((unsigned char *)src)[count];
		count++;
	}
	return (dest);
}
