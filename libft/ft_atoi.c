/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:55:55 by cschmied          #+#    #+#             */
/*   Updated: 2022/12/16 12:11:46 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_whitespace(char c)
{
	if (c == '\t' || c == '\n' || c == '\r'
		|| c == '\f' || c == '\v' || c == ' ')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	sum;
	int	multiplier;

	sum = 0;
	i = 0;
	multiplier = 1;
	sign = 1;
	while (check_whitespace(str[i]) == 1)
		i ++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_isdigit(str[i]) != 0)
		i ++;
	while (i--, ft_isdigit(str[i]) != 0 && i >= 0)
	{
		sum += multiplier * (str[i] - '0');
		multiplier *= 10;
	}
	return (sum * sign);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	printf("ft_atoi %d\t\t atoi: %d\n", 
// 	ft_atoi(" \t\n\r\v\f  469 \n"), atoi("\t\n\r\v\f  469 \n"));
// 	printf("ft_atoi %d\t\t atoi: %d\n", ft_atoi(" . -1"), atoi(" . -1"));
// 	printf("ft_atoi %d\t\t atoi: %d\n", ft_atoi("0"), atoi("0"));
// 	printf("ft_atoi %d\t\t atoi: %d\n", ft_atoi("1"), atoi("1"));
// 	printf("ft_atoi %d\t\t atoi: %d\n", ft_atoi("-01234"), atoi("-01234"));
// 	printf("ft_atoi %d\t\t atoi: %d\n", ft_atoi("01234"), atoi("01234"));
// 	printf("ft_atoi %d\t\t atoi: %d\n", ft_atoi("012as34"), atoi("01234"));
// 	printf("ft_atoi %d\t\t atoi: %d\n", ft_atoi("\n01234"), atoi("\n01234"));
// 	printf("ft_atoi %d\t\t atoi: %d\n", ft_atoi(""), atoi(""));
// 	printf("ft_atoi %d\t\t atoi: %d\n", ft_atoi("gfaeg"), atoi("dfgagr"));
// }
