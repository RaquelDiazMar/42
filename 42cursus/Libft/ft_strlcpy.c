/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:55:11 by rdiaz             #+#    #+#             */
/*   Updated: 2021/04/24 15:53:08 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 * This function "copies up to dstsize - 1 characters from the string src to 
 * dst, NUL-terminating the result if dstsize is not 0."
 * 
 * The function returns the total lenght of the string to be created (src).
 */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!src || !dst)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
