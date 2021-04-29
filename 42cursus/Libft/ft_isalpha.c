/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 12:35:52 by rdiaz             #+#    #+#             */
/*   Updated: 2021/04/24 19:05:12 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * This function "tests for any character for which isupper(3) or islower(3) is 
 * true. The value of the argument must be representable as an unsigned char or 
 * the value of EOF."
 * 
 * It returns "zero if the character tests false and returns non-zero if the 
 * character tests true.".
*/
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
