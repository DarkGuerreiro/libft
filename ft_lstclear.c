/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosa-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:07:08 by arosa-de          #+#    #+#             */
/*   Updated: 2022/12/17 02:11:03 by arosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Deletes and frees the given node 
//and every successor of that node, using the function ’del’
//and free(3)
//Finally, the pointer to the list must be set to NULL
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{	
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
