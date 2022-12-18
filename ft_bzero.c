/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:14:59 by cschmied          #+#    #+#             */
/*   Updated: 2022/12/14 18:40:23 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*a;

	a = (char *)s;
	i = 0;
	while (i < n)
	{
		a[i] = (char) NULL;
		i++;
	}
	return ;
}

// #include <stdio.h>

// int	main()
// {
// 	char str[50] = "Just Some random stuff \0";
// 	printf("before: %s\n", str);
// 	bzero(str, 10);
// 	fprintf(stderr, "after: ");
// 	write(1, str, 22);
// 	return (0);
// }