/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:35:58 by rdiaz             #+#    #+#             */
/*   Updated: 2021/04/24 17:15:49 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * This function "converts a lower-case letter to the corresponding upper-case 
 * letter. The argument must be representable as an unsigned char or the value 
 * of EOF".
 * 
 * If the argument is a lower-case letter, it returns the corresponding 
 * upper-case letter if there is one; otherwise, the argument is returned 
 * unchanged.".
*/
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
