/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 05:15:00 by arosa-de          #+#    #+#             */
/*   Updated: 2022/12/17 02:06:27 by arosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates (with malloc(3))
//and returns an array of strings obtained by splitting ’s’
//using the character ’c’ as a delimiter
//The array must end with a NULL pointer
#include "libft.h"

static int	ft_wordcount(char *s, char c)
{
	int	total;
	int	inword;

	if (!s)
		return (0);
	total = 0;
	inword = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			if (!inword)
				total++;
			inword = 1;
		}
		else
			inword = 0;
		s++;
	}
	return (total);
}

static char	*create_string(char *current, char **ptr, size_t i, char c)
{
	char	*end;

	end = ft_strchr(current, c);
	if (!end)
		end = ft_strchr(current, '\0');
	ptr[i] = malloc(end - current + 1);
	if (!ptr[i])
		return (NULL);
	ft_memcpy(ptr[i], current, end - current);
	ptr[i][end - current] = '\0';
	return (end);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**ptr;
	char	*current;
	size_t	i;

	words = ft_wordcount((char *)s, c);
	ptr = malloc(words * sizeof(s) + sizeof(s));
	if (!ptr)
		return (NULL);
	ptr[words] = 0;
	current = (char *)s;
	i = 0;
	while (i < words)
	{
		while (*current == c)
			current++;
		current = create_string(current, ptr, i, c);
		i++;
	}
	return (ptr);
}
