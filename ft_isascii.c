/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:08:57 by mconde-s          #+#    #+#             */
/*   Updated: 2024/09/18 13:08:59 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Esta función comprueba si es un carácter de la tablas ASCII
int	ft_isacii(int c)
{
	if (c >= 0 && c <= 255)
		return (1);
	return (0);
}

int	main(void)
{
	int a;
	int b;

	a = 256;
	b = 255;

	printf("%d\n", ft_isacii(a));
	printf("%d", ft_isacii(b));

	return (0);
}