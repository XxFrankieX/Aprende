/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:54:30 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/10 21:08:40 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//*s != (char)c
// Aquí *s se compara con (char)c. Esto sugiere que c es una variable que se convierte al tipo char antes de compararla con el valor de *s. En otras palabras,
//estamos revisando si el carácter en la posición actual de la cadena es diferente de c.
// 3. while (*s && ...)
// La primera condición *s verifica si el puntero no ha llegado al final de la cadena (porque en C,
//las cadenas terminan con un carácter nulo \0, que equivale a 0,
//y al evaluar *s como false al final de la cadena).
// Entonces,
//el ciclo while continuará mientras el valor al que apunta s no sea el carácter nulo (*s es diferente de 0) y mientras el valor actual de *s no sea igual a (char)c.
// Resumen
// En general,
//este ciclo while está recorriendo una cadena de caracteres desde el puntero s,
//avanzando posición por posición,
//y se detendrá cuando se cumpla una de las siguientes condiciones:
//
// Se alcance el final de la cadena (cuando *s sea 0).
// Se encuentre un carácter que sea igual a c (cuando *s == (char)c).
char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c) // Deja de entrar cuando aparece un caracter.
	{
		s++;
	}
	if (*s == '\0' && c != 0) // PREGUNTA SI ES *S + 1 o así.
			return (NULL);
	return ((char *)s);
}

/* int	main(void)
{
	char	a[] = "123443434helloThere";

	printf("%s", ft_strchr(a, 'h'));
	return (0);
} */
