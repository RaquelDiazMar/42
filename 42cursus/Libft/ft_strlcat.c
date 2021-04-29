/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 16:32:50 by rdiaz             #+#    #+#             */
/*   Updated: 2021/04/25 15:59:11 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 * This function "appends string src to the end of dst.  It will append at most 
 * dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless 
 * dstsize is 0 or the original dst string was longer than dstsize."
 * 
 * In other words: Characters from string src are appended to string dst. The 
 * dstsize argument is equal to the size of the dst buffer, which caps the 
 * number of characters copied to this size, minus one for the null character.
 * 
 * The function returns the initial length of dst plus the length of src (not 
 * counting their terminating null characters).
 */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size;

	size = 0;
	while (dst[size] != '\0' && size < dstsize)
		size++;
	i = size;
	while (src[size - i] && size + 1 < dstsize)
	{
		dst[size] = src[size - i];
		size++;
	}
	if (i < dstsize)
		dst[size] = '\0';
	return (i + ft_strlen(src));
}
