/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:25:39 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/15 20:23:48 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Mirar matriz.

#include "libft.h"

void ft_free(char **result)
 {
	size_t position;

	position = 0;
	while (result[position])
		free(result[position++]);
	free(result);
 }
 
int	count_sub(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

char	**ft_filler(char const *s, char c)		
{
	size_t i;     // iterador del string principal.
	size_t j;     // iterador de los arrays bidemensionales.
	size_t start; // Marca el índice del inicio de una nueva substring.
	char **aux;   

	aux = ft_calloc((count_sub(s, c) + 1), sizeof(char *));
	j = 0;     
	start = 0; 
	i = 0;
	if (!aux)
		return (NULL); 


	while (s[i])
	{
		if (s[i] == c)
		{
			if (i > start)
			{
				aux[j] = ft_substr(s, start, i - start);
				if (!aux[j])
					{
						ft_free(aux);
						return (NULL);
					}
				j++;
			}
			start = i + 1;
		}
		i++;
	}

	if (i > start)
	{
		aux[j] = ft_substr(s, start, i - start);
		if (!aux[j])
		{
			ft_free(aux);
			return (NULL);
		}
		j++;
	}
	aux[j] = NULL;
	return (aux); 
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	
	if(!s)
		return(NULL);
	result = ft_filler(s, c);
	if (!result)
		return (NULL);
	return (result);
}

// Encontrar cuantos caracteres delimitadores hay: Recorrer s y contar cuantos c hay.

/* int main()
{
	char	a[] = "hola mundo   que tal ";
	char **resultado = ft_split(a, ' ');
	printf("%s\n",resultado[0]);
	printf("%s\n",resultado[1]);
	printf("%s\n",resultado[2]);
	printf("%s\n",resultado[3]);
	free(resultado[1]);
	free(resultado[2]);
	free(resultado[3]);
	free(resultado[0]);
	free(resultado);
	return (0);
} */
// Ejemplo:
// Supongamos que tienes la cadena s = "hola,mundo" y estás en la posición donde i es 4 (que corresponde a la coma ,). En ese caso:
//
// start sería 0 (donde empieza la palabra "hola").
// i es 4 (donde está la coma).
// Al calcular i - start, obtienes 4 - 0 = 4,
//que es la longitud de la substring "hola".
//
// Este cálculo permite que la función ft_substr sepa cuántos caracteres extraer desde el índice start hasta el índice i,
//asegurando que captures solo la parte relevante de la cadena sin incluir el separador.
