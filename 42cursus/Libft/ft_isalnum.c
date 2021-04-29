/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:52:46 by rdiaz             #+#    #+#             */
/*   Updated: 2021/04/24 16:26:22 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * This function "tests for any character for which isalpha(3) or isdigit(3) is 
 * true. The value of the argument must be representable as an unsigned char or 
 * the value of EOF."
 * 
 * It returns "zero if the character tests false and returns non-zero if the 
 * character tests true.".
*/
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
