/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:33:31 by cschmied          #+#    #+#             */
/*   Updated: 2022/12/16 17:30:30 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;
	int		multiplier;
	int		sign;

	sign = 0;
	if (n == 0)
	{
		ptr = (char *)malloc(sizeof(char) * 2);
		ptr[0] = '0';
		ptr[1] = 0;
		return (ptr);
	}
	if (n < 0)
	{
		n = -n;
		sign = 1;
	}
	multiplier = 1;
	i = 0;
	ptr = malloc(sizeof(char) * 12);
	ptr[11] = 0;
	while (n != 0)
	{
		ptr[10 - i] = (n % 10) + '0';
		n /= 10;
		i ++;
	}
	if (sign == 1)
		ptr[10 - i] = '-';
	else
		i --;
	return (ptr + (10 - i));
}

// #include <stdio.h>

// int	main()
// {
// 	printf("%s\n", ft_itoa(0));
// 	return (0);
// }