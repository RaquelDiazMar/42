/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiaz <rdiaz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:47:53 by rdiaz             #+#    #+#             */
/*   Updated: 2021/04/29 13:22:12 by rdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* This function writes the character 'c' over the descriptor on the file 
* provided.
* 
* There is no return value.
*/
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
