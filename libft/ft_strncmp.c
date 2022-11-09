/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 22:11:41 by arosa-de          #+#    #+#             */
/*   Updated: 2022/07/21 22:11:46 by arosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				index;
	unsigned int	count;

	index = 0;
	count = 0;
	while (((s1[count] != '\0') || (s2[count] != '\0'))
		&& (count < n) && !index)
	{
		index = (s1[count] - s2[count]);
		count++;
	}
	return (index);
}
