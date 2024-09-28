/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:02:06 by mconde-s          #+#    #+#             */
/*   Updated: 2024/09/24 14:02:13 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// Esta función  comprueba si el carácter es alfabético o un número
int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}

// int main ()
// {
// 	int c;
// 	int d;
// 	int e;

// 	c = '2';
// 	d = 'a';
// 	e = 'B';

// 	printf ("%d\n", ft_isalnum(c));
// 	printf ("%d\n", ft_isalnum(d));
// 	printf ("%d\n", ft_isalnum(e));

// 	return (0);
// }
