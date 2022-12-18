/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 19:18:51 by cschmied          #+#    #+#             */
/*   Updated: 2022/12/18 16:40:16 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	while ((*lst) -> next)
		(*lst) = (*lst) -> next;
	(*lst) -> next = new;
	return ;
}

// #include <stdio.h>

// int	main()
// {
// 	t_list n1, n2, n3, new;
// 	t_list	*ptr;

// 	ptr = &n1;
// 	n1.next = &n2;
// 	n2.next = &n3;
// 	n3.next = 0;
// 	new.content = "Hello World";
// 	new.next = 0;
// 	ft_lstadd_back(&ptr,  &new);
// 	printf("%s\n", ft_lstlast(&n1) -> content);
// 	return (0);
// }