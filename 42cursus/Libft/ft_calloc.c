/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 16:05:31 by rdiaz             #+#    #+#             */
/*   Updated: 2021/04/24 12:40:47 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * This function "contiguously allocates enough space for count objects that 
 * are size bytes of memory each and returns a pointer to the allocated memory.
 * The allocated memory is filled with bytes of value zero".
 * 
 * It returns "return a pointer to allocated memory.  If there is an error, 
 * they return a NULL pointer and set errno to ENOMEM".
*/
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*buffer;

	buffer = malloc(count * size);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, count * size);
	return (buffer);
}
