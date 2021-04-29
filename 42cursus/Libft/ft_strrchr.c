/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 20:29:09 by rdiaz             #+#    #+#             */
/*   Updated: 2021/04/25 16:45:01 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * This function locates the last occurrence of c (converted to a char) in the 
 * string pointed to by s. The terminating null character is considered to be 
 * part of the string; therefore if c is `\0', the functions locate the 
 * terminating `\0'.
 * 
 * The function returns a pointer to the located character, or NULL if the 
 * character does not appear in the string.
 * 
 * Notice that the extra 'r' stands for reverse.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
