/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:07:19 by arosa-de          #+#    #+#             */
/*   Updated: 2022/12/17 02:11:21 by arosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Iterates the list ’lst’ 
//and applies the function ’f’ on the content of each node
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
