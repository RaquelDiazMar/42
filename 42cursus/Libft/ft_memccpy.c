/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 18:42:21 by rdiaz             #+#    #+#             */
/*   Updated: 2021/04/24 18:43:05 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 * This "function copies bytes from string src to string dst. If the character 
 * c (as converted to an unsigned char) occurs in the string src, the copy 
 * stops and a pointer to the byte after the copy of c in the string dst is 
 * returned. Otherwise, n bytes are copied, and a NULL pointer is returned". 
 * 
 * NOTE: the type qualifier 'restrict' has been removed from the protoype as 
 * requested by the subject.  
 */
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!*d && !*s)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
			return ((char *)dst + i + 1);
		i++;
	}
	return (NULL);
}
