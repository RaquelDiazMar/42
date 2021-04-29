/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 20:34:00 by rdiaz             #+#    #+#             */
/*   Updated: 2021/04/25 14:21:32 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * This function "locates the first occurrence of the null-terminated string 
 * needle in the string haystack, where not more than len characters are 
 * searched. Characters that appear after a `\0' character are not searched."
 * 
 * If needle is an empty string, haystack is returned; if needle occurs nowhere 
 * in haystack, NULL is returned; otherwise a pointer to the first character of 
 * the first occurrence of needle is returned.
 * 
 * Haystack is equal to 'h' and needle to 'n', so that line 44 is not too long.
*/
#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*n)
		return ((char *)h);
	while (i < len && h[i] != '\0')
	{
		j = 0;
		while (i + j < len && h[i + j] == n[j] && n[j] != '\0')
			j++;
		if (n[j] == '\0')
			return ((char *)h + i);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	const char	*hay;
	const char 	*need;
	size_t		i;

	hay = "Hola holita";
	need = "ola";
	i = 1;

	printf("strnstr: %s\n", strnstr(hay, need, i));
	printf("ft_strnstr: %s\n", ft_strnstr(hay, need, i));
	return (0);
}*/