/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:28:22 by cschmied          #+#    #+#             */
/*   Updated: 2022/12/17 13:47:05 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_if_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	if (set == NULL)
		return (0);
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (s1 == NULL)
		return (NULL);
	while (s1[i] && check_if_in_set(s1[i], set) == 1)
		i ++;
	while (j >= 0 && check_if_in_set(s1[j], set) == 1)
		j --;
	ptr = (char *)malloc(sizeof(char) * (j - i) + 1);
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1 + i, j - i + 1);
	ptr[j + 1] = 0;
	return (ptr);
}

#include <stdio.h>

int	main()
{
	printf("%s\n", ft_strtrim("lorem ipsum dolor sit amet", "te"));
	// printf("%s\n", ft_strtrim("Hello World", "Hello World"));
	// printf("%s\n", ft_strtrim("Hello World", NULL));
	// printf("%s\n", ft_strtrim(NULL, NULL));
	// printf("%s\n", ft_strtrim("", ""));
	// printf("%s\n", ft_strtrim("Hello WOrld", ""));
	// printf("%s\n", ft_strtrim("", "Hello"));
	return (0);
}