/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 13:23:24 by rdiaz             #+#    #+#             */
/*   Updated: 2021/04/29 13:09:15 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* This fucntion allocates memory and returns the character string that is copy
* of s1, without the characters indicated in the set at the beginning and at the
* end of the character string. 
* 
* If the memory allocation fails, the function will return NULL.
*/
#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buffer;
	size_t	i;

	if (s1 && set)
	{
		while (*s1 && ft_strchr(set, *s1))
			s1++;
		i = ft_strlen(s1);
		while (i && ft_strchr(set, s1[i]))
			i--;
		buffer = ft_substr(s1, 0, i + 1);
	}
	else
		buffer = NULL;
	return (buffer);
}

/*int main()
{
	char *r;
	char *R;

	r = "Holacaracola";
	R = "la";
	printf("Resultado = %s\n", ft_strtrim(r, R));
	return (0);
}*/