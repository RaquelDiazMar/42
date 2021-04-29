/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:39:30 by rdiaz             #+#    #+#             */
/*   Updated: 2021/04/24 20:18:09 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * This function "tests for a decimal digit character". "The value of the 
 * argument must be representable as an unsigned char or the value of EOF."
 * 
 * It returns "zero if the character tests false and return non-zero if the 
 * character tests true.".
*/
#include <unistd.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
