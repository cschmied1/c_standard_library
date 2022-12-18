/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:54:05 by cschmied          #+#    #+#             */
/*   Updated: 2022/12/18 19:44:45 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_strs(char const *s, char c)
{
	int		sum;
	char	*i;
	char	**ptrs;

	i = (char *)s;
	sum = 0;
	while (ft_strchr(i, c) < ft_strrchr(s, c))
	{
		sum ++;
		i = ft_strchr(i + 1, c);
	}
	if (*(ft_strrchr(s, c) + 1) != 0)
		sum ++;
	return (sum);
}

int	recursive(char const *s, char c, char **ptr, int wc)
{
	int	posx;

	posx = ft_strchr(s, c)
	if (ft_strchr(s, c) < ft_strrchr(s, c))
	{
		recursive(s + posx + 1, c, ptr, wc + ());
	}
}

char **ft_split(char const *s, char c)
{
	char	**ptr;

	recursive(s, c, ptr, 0, 0);
}

// #include <stdio.h>

// int	main()
// {
// 	printf("%d\n", count_split_strs("XHellXo XWorldX", 'X'));
// 	return (0);
// }