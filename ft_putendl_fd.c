/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:56:22 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/12 19:16:03 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{	
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}