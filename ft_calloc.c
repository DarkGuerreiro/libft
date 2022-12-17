/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 01:03:31 by arosa-de          #+#    #+#             */
/*   Updated: 2022/12/17 02:10:26 by arosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates enough space for count objects that are size bytes of memory each
//and returns a pointer to the allocated memory
//The allocated memory is filled with bytes of value zero
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, (size * nmemb));
	return (ptr);
}
