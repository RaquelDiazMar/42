/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:47:55 by rdiaz             #+#    #+#             */
/*   Updated: 2021/04/23 17:26:29 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 * This "function writes n zeroed bytes to the string s. If n is zero, bzero() 
 * does nothing". 
 * This function "was deprecated in IEEE Std 1003.1-2001 (``POSIX.1'') and 
 * removed in IEEE Std 1003.1-2008 (``POSIX.1'')", so ft_memset will be used.
 */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
