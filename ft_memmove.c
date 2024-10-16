/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:29:23 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/14 18:14:42 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Esta función copia n bytes desde el área de memoria de src al área de memoria dest. Las memorias podrían superponerse.
// La copia se realiza como si los bytes en src se copiaran primero en una matriz temporal que no se superpone a src o dest,
//y luego los bytes se copian desde la matriz temporal a dest.
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*src2;
	unsigned char	*dest2;
	size_t			i;
	
	if(!dest && !src)
		return(dest);
	src2 = (unsigned char *)src; // Casting
	dest2 = (unsigned char *)dest;
	if (dest2 < src2) //(el if solo se repite una vez,
		//no hay bucles) Si dest es menor(posición en la que se encuentra en la memoria) que el origen
	{
		i = 0;        // el iterador
		while (i < n)
			// mientras que el iterador es menor que el tamaño de los bytes que señalo
		{
			dest2[i] = src2[i];
				// va a añadir el contenido de src en dest desde 0
			i++;
		}
		return (dest);
	}
	else if (dest2 > src2)
		// Si dest es mayor (posición en la que se encuentra en la memoria) que el origen
	{
		i = n;       
			// Señalas que el iterador va a empezar en la posición final,
			//pues es el número de total de bytes.
		while (i > 0) // Mientras i sea mayor que 0
		{
			dest2[i - 1] = src2[i - 1];
				// Para poder llegar al 0 se debe restar uno porque la condición nunca va a llegar ser 0 porque i siempre va a ser positivo.
			i--;                        // itera hacia atrás.
		}
	}
	return (dest);
}
// #include <string.h>
// int main()
// {
// 	char src[] = "TodoMal";
// 	char dest[] = "NoPasaNada";
// 	ft_memmove(dest, src, 12);
// 	printf("%s\n", dest);
// 	return(0);
// }