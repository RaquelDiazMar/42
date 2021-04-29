/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 19:23:50 by rdiaz             #+#    #+#             */
/*   Updated: 2021/04/24 16:28:24 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This "function copies len bytes from string src to string dst. The two  
 * strings may overlap; the copy is always done in a non-destructive manner", 
 * returning the original value of dst.
 */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst == 0 && src == 0)
		return (NULL);
	if (src < dst)
		while (len--)
			d[len] = s[len];
	else
		while (len--)
			*d++ = *s++;
	return (dst);
}
