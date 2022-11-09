/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:15:26 by arosa-de          #+#    #+#             */
/*   Updated: 2022/07/23 19:15:39 by arosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	count;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	index = ft_strlen(dest);
	count = 0;
	while (src[count] != '\0' && index + 1 < size)
	{
		dest[index] = src[count];
		index++;
		count++;
	}
	dest[index] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[count]));
}
