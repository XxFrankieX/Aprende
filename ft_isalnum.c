/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:41:52 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/02 15:57:49 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

// Esta función  comprueba si el carácter es alfabético o un número
int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 97 && c <= 122) || (c >= 65 && c <= 90)) //Se señalan los carácteres alfabéticos y numéricos en la tablas ascii.
		return (1); //Te devuelve verdadero(1) si cumple la condición.
	return (0); //Te devuelve falso(0) si no la cumple.
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
