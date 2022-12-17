/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 23:01:05 by arosa-de          #+#    #+#             */
/*   Updated: 2022/12/17 02:00:50 by arosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Copies len bytes from the memory of src to dst
//Memories may overlap
//First, the bytes in src are copied into a temporary array and then to dst
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == src || n == 0)
		return (dest);
	if (dest > src && (size_t)(dest - src) < n)
	{
		while (n--)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		return (dest);
	}
	ft_memcpy(dest, src, n);
	return (dest);
}
