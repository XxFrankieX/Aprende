/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:33:39 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/14 18:12:53 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Esta función copia n bytes del área de memoria src al área de memoria de dest. Las áreas de memoria no deben superponerse.

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest2;
	unsigned char	*src2;

	size_t i; // contador
	if(!dest && !src)
		return(dest);
	dest2 = (unsigned char *)dest;
		// Se castean los datos para asignar el tipo de dato con el que va a trabjar.
	src2 = (unsigned char *)src;
	i = 0;
	while (i < n)
		// Mienras el índice sea menos que el número de bytes con el que vamos a trabajar.
	{
		dest2[i] = src2[i]; // Se va a copiar el origen en destino
		i++;
	}
	return (dest); // Devuelve destino.
}

/* int	main(void)
{
	char	src3[] = "holaQueTal";
	char	dest3[] = "buenasTardesHola";

	ft_memcpy(dest3, src3, 20);
	printf("%s", dest3);
	return (0);
} */
