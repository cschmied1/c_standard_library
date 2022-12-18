/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:29:53 by cschmied          #+#    #+#             */
/*   Updated: 2022/12/16 17:27:46 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;

	len_dst = ft_strlen(dst);
	i = len_dst;
	if (dstsize == 0 || dstsize < len_dst)
		return (len_dst + ft_strlen(src));
	while (i - len_dst < dstsize)
	{
		((char *)dst)[i] = ((char *)src)[i - len_dst];
		i ++;
	}
	dst[i] = 0;
	return (len_dst + ft_strlen(src));
}
