/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:07:42 by rdiaz             #+#    #+#             */
/*   Updated: 2021/04/23 20:45:37 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This "function copies n bytes from memory area src to memory area dst. If 
 * dst and src overlap, behavior is undefined", returning the original value 
 * of dst.
 * 
 * Creation of a variable char pointer to cast parameter string dst, and a 
 * variable char pointer to cast parameter string src.
 */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst == src || n == 0)
		return (dst);
	while (n--)
	{
		*d++ = *s++;
	}
	return (dst);
}
