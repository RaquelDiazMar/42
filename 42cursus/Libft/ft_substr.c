/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 11:32:49 by rdiaz             #+#    #+#             */
/*   Updated: 2021/04/28 16:24:34 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* This fucntion allocates memory and returns a new copy of a portion of the
* string passed in the parameter (s). The portion begins at the index paramater 
* (start) and has the length of the parameter len. 
* 
* If start and len do not designate a portion of a valid string the behaviour
* is undefined. 
*
* If the memory allocation fails, the function will return NULL.
*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*buffer;

	i = 0;
	buffer = (char *)malloc(sizeof(char) * (len + 1));
	if (!buffer || !s)
		return (NULL);
	while (i < len && start < ft_strlen(s))
	{
		buffer[i] = s[start + i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
