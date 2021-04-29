/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 13:34:49 by rdiaz             #+#    #+#             */
/*   Updated: 2021/04/23 18:31:17 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * This function "compares not more than n characters.  Because strncmp() is 
 * designed for comparing strings rather than binary data, characters that 
 * appear after a `\0' character are not compared."
 * 
 * It returns "an integer greater than, equal to, or less than 0, according as 
 * the string s1 is greater than, equal to, or less than the string s2. The 
 * comparison is done using unsigned characters, so that `\200' is greater 
 * than `\0'".
*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*s1 && *s2 && (*s1 == *s2) && i < (n - 1))
	{
		s1++;
		s2++;
		i++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
