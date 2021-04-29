/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 19:48:56 by rdiaz             #+#    #+#             */
/*   Updated: 2021/04/24 15:53:12 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * This function locates the first occurrence of c (converted to a char) in the 
 * string pointed to by s. The terminating null character is considered to be 
 * part of the string; therefore if c is `\0', the functions locate the 
 * terminating `\0'.
 * 
 * The function returns a pointer to the located character, or NULL if the 
 * character does not appear in the string.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	if (!c && s[i] == '\0')
		return ((char *)s + i);
	return (NULL);
}
