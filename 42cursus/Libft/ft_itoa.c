/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:41:49 by rdiaz             #+#    #+#             */
/*   Updated: 2021/04/29 17:51:26 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* This function allocates memory and returns the string of characters that 
* represents the integer argument. Negative numbers are managed.
* 
* The return value is the string character that represents the integer value.
* In case there is a memory allocation issue, the functions returns the NULL
* value.
*/
#include "libft.h"
#include <limits.h>

char	*ft_itoa(int n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 2);
	if (!str)
		return (NULL);
	if (n == -2147483648)
		return (str = ft_strdup("-2147483648"));
	if (n < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa(-n));
	}
	else if (n >= 10)
		str = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if (n < 10 && n >= 0)
	{
		str[0] = n + '0';
		str[1] = '\0';
	}
	return (str);
}
