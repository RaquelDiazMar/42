/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 12:33:05 by rdiaz             #+#    #+#             */
/*   Updated: 2021/04/28 13:14:49 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* This fucntion allocates memory and returns a new copy result of concatenating
* both strings s1 and s2, passed as paramaeters, and in that order.  
* (start) and has the length of the parameter len. 
* 
* If the memory allocation fails, the function will return NULL.
*/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*buffer;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	buffer = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!buffer)
		return (NULL);
	while (s1[i] != '\0')
	{
		buffer[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		buffer[i + j] = s2[j];
		j++;
	}
	buffer[i + j] = '\0';
	return (buffer);
}
