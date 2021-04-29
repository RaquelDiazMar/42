/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 11:38:49 by rdiaz             #+#    #+#             */
/*   Updated: 2021/04/24 14:17:58 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 * This "function computes the length of the string s.  The strnlen() function 
 * attempts to compute the length of s, but never scans beyond the first maxlen 
 * bytes of s". 
 * 
 * The "function returns the number of characters that precede the terminating 
 * NUL character. The strnlen() function returns either the same result as 
 * strlen() or maxlen, whichever is smaller." 
 */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}
