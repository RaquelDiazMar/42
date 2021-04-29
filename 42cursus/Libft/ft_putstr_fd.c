/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:12:10 by rdiaz             #+#    #+#             */
/*   Updated: 2021/04/29 13:25:11 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* This function writes the string 's' over the descriptor on the file provided.
* 
* There is no return value.
*/
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
