/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:21:05 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/13 12:19:19 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t lens1;
	size_t new_len;
	size_t start;
	size_t end;
	char *sub;

	if (!s1 || !set)
		return(0);
	start = 0;
	lens1 = ft_strlen(s1);
	end = lens1;
	//start < lens1: Asegura que start no exceda la longitud de la cadena s1. Esto previene un acceso fuera de los límites de la cadena.
	//ft_strchr(set, s1[start]): Utiliza la función ft_strchr, que busca si el carácter actual s1[start] está presente en el conjunto de caracteres set.
	//este carácter debe ser eliminado (es un carácter "no deseado").
	while (start < lens1 && ft_strchr(set, s1[start]))
		start++;
	//Resultado: Al final de este bucle, start apunta al primer carácter en s1 que no está en set, o start es igual a la longitud de s1 si todos los caracteres al principio están en set.
	while (end > start && ft_strchr(set, s1[end -1]))
		end--;
	new_len = end - start;
	//Restar start de end te da la longitud de la subcadena que queda después de haber eliminado los caracteres no deseados de ambos extremos de s1.
	sub = ft_substr(s1, (unsigned int)start, new_len);
	
	return(sub);
}
/* " "
"          a             " -> "a"

" "
"      aaa     " -> "a   a"

"maria"

"mairaairammaromariaoamri"
"omariao" */