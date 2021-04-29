/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:59:27 by rdiaz             #+#    #+#             */
/*   Updated: 2021/04/24 13:53:10 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 * This function "function locates the first occurrence of c (converted to an 
 * unsigned char) in string s".
 * 
 * It "returns a pointer to the byte located, or NULL if no such byte exists 
 * within n bytes." 
 */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
