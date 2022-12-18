/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 19:42:45 by cschmied          #+#    #+#             */
/*   Updated: 2022/12/18 17:09:00 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;

	head = ft_lstnew(f(lst -> content));
	if (!lst)
		return (NULL);
	if (!head)
	{
		del(head -> content);
		ft_lstdelone(head, del);
		return (NULL);
	}
	lst = lst -> next;
	while (lst)
	{
		node = ft_lstnew(f(lst -> content));
		if (!node)
		{
			del(node -> content);
			ft_lstdelone(node, del);
			return (NULL);
		}
		ft_lstadd_back(&head, node);
		lst = lst -> next;
	}
	return (head);
}
