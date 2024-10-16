/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:36:08 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/12 17:54:27 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);	
}

/* int	main()
{
	int	fd;
	int	fd2;


	fd = open("txt.txt", O_WRONLY);
	fd2 = open("patata.txt", O_WRONLY);
	printf("%d", fd);
	printf("%d", fd2);
	ft_putchar_fd('c', fd);
}
 */