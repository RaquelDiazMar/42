/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 15:10:08 by rdiaz             #+#    #+#             */
/*   Updated: 2021/04/24 18:52:21 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 * This "function compares byte string s1 against byte string s2. Both strings 
 * are assumed to be n bytes long". 
 * 
 * It "returns zero if the two strings are identical, otherwise returns the 
 * difference between the first two differing bytes (treated as unsigned char 
 * values, so that `\200' is greater than `\0', for example). Zero-length 
 * strings are always identical.  This behavior is not required by C and 
 * portable code should only depend on the sign of the returned value." 
 */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
