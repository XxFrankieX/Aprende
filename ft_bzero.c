/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:29:34 by mconde-s          #+#    #+#             */
/*   Updated: 2024/09/30 13:29:35 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//Esta función se puede utilizar para borrar el área de memoria dada con 0 bytes (\0)
void ft_bzero(void *s, size_t n)
{
	unsigned char *s2;
	size_t i;

	s2 = (unsigned char*) s; //se castea el puntero para que vaya byte por byte. Recordemos que un char es 1 byte e int son 4 bytes.
	i = 0;

	while (i < n) //mientras que el índice sea menor que el tamaño de bytes asignados
	{
		s2[i] = '\0'; //valor nulo. Se va a sustituir  el valor del puntero por valores nulos.
		i++; //itera
	}
}

int main()
{
	char o[15];

	ft_bzero(o, 25);
	printf("%s\n", o);
	return(0);
}