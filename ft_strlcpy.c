/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 20:40:39 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/11 12:37:47 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Las funciones strlcpy() y strlcat() devuelven la longitud total de la cadena que intentaron crear.  Para strlcpy() eso significa la longitud de src.  Para strlcat() eso significa la longitud inicial de dst
// más la longitud de src.  Si bien esto puede parecer algo confuso,
//se hizo para simplificar la detección de truncamiento.
// Sin embargo,
//tenga en cuenta que si strlcat() atraviesa caracteres de tamaño sin encontrar un NUL,
//la longitud de la cadena se considera tamaño y la cadena de destino no terminará en NUL (ya que
// no había espacio para el NUL).  Esto evita que strlcat() se salga del final de una cadena.  En la práctica,
//esto no debería suceder (ya que significa que cualquiera de los tamaños es incorrecto o que dst no es un
// cadena “C” adecuada).  La verificación existe para evitar posibles problemas de seguridad en un código incorrecto.
// La función ft_strlcpy copia hasta size - 1 caracteres de la cadena src a dst,
//asegurándose de que la cadena de destino esté siempre terminada en nulo.

// size_t: Es un tipo de dato que representa un tamaño o cantidad. Es un tipo de dato sin signo,
//lo que significa que solo puede contener valores no negativos.
// Se utiliza comúnmente para representar tamaños de objetos en bytes.
// size_t size: Es el tamaño máximo de caracteres que se copiarán de la cadena de origen a la cadena de destino,
//incluyendo el carácter nulo de terminación.

// MIRAR MEJOR!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return(ft_strlen(src));
		
	while (i < (size - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	
	return (ft_strlen(src));
}
// int main()
// {
// 	char dst[] = "ku";
// 	char src[] = "H";
// 	ft_strlcpy(dst, src, 10);
// 	printf("%lu", ft_strlen(dst));
// 	return(0);
// }