/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:11:14 by cschmied          #+#    #+#             */
/*   Updated: 2022/12/18 13:43:11 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	ptr = (char *)malloc(len * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	if (ft_strlen(s) >= start)
		ft_strlcpy(ptr, s + start, len + 1);
	else
		ft_bzero(ptr, len + 1);
	return (ptr);
}

// #include <stdio.h>

// int main(void)
// {
// 	char	*str = "Helllo World";
// 	char	*str2;

// 	str2 = ft_substr(str, 5, 5);
// 	printf("%s\n", str2);
// 	return (0);
// }