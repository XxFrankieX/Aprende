/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:25:39 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/16 21:43:40 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Mirar matriz.

#include "libft.h"

void    *ft_free(char **result)
{
        size_t  position;

        position = 0;
        while (result[position])
                free(result[position++]);
        free(result);
        return (NULL);
}

int     count_sub(const char *s, char c)
{
        size_t  i;
        size_t  count;

        i = 0;
        count = 0;
        // Contar las ocurrencias de c y substrings
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
char    **ft_filler(char const *s, char c, size_t i, size_t j)
{
        size_t start; // Marca el índice del inicio de una nueva substring.
        char **aux;   // función temporal donde vamos a guardar las substrtings.

        aux = ft_calloc((count_sub(s, c) + 1), sizeof(char *));
        if (!aux)
                return (NULL); // Manejar error de memoria
        start = 0;         // Cuabdo encuentra el separador(c), se utiliza strart.
        while (1) //Esta conción se va a dar siempre porque 1 es siempre verdadero.
        {
			if (s[i] == c || s[i] == 0)
			{
					if (i > start)
					{
							aux[j] = ft_substr(s, start, i - start);
							if (!aux[j++])
									return (ft_free(aux)); // Manejar error de memoria
					}
					start = i + 1;
				if (s[i] == 0)
					break;
			}
			i++;
        }
        aux[j] = NULL; // Terminar el array con NULL
        return (aux);
}

char    **ft_split(char const *s, char c)
{
        char    **result;

        if (!s)
                return (NULL);
        result = ft_filler(s, c, 0, 0);
        if (!result)
                return (NULL);
        return (result);
}
// Añadir el último substring si existe

// Encontrar cuantos caracteres delimitadores hay: Recorrer s y contar cuantos c hay.

/* int  main(void)
{
        int     i;

        char a[] = "  lorem ipsum dolor sit amet,
                                consectetur adipiscing elit.Sed non risus.Suspendisse ";
                                char *
                *resultado;
        resultado = ft_split(a, ' ');
        i = 0;
        while (i < count_sub(a, ' '))
        {
                printf("resul: %s\n", resultado[i]);
                i++;
        }
        i = 0;
        while (i < count_sub(a, ' '))
        {
                free(resultado[i]);
                i++;
        }
        free(resultado);
        return (0);
}
 *//* int main()
{
        char    a[] = "lorem ipsum dolor sit amet,
                        consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor,
                        dignissim sit amet, adipiscing nec, ultricies sed,
                        dolor. Cras elementum ultricies diam. Maecenas ligula massa,
                        varius a, semper congue, euismod non, mi.";
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
}  */
// Ejemplo:
// Supongamos que tienes la cadena s = "hola,mundo" y estás en la posición donde i es 4 (que corresponde a la coma ,). En ese caso:
//
// start sería 0 (donde empieza la palabra "hola").
// i es 4 (donde está la coma).
// Al calcular i - start, obtienes 4 - 0 = 4,
// que es la longitud de la substring "hola".
//
// Este cálculo permite que la función ft_substr sepa cuántos caracteres extraer desde el índice start hasta el índice i,
// asegurando que captures solo la parte relevante de la cadena sin incluir el separador.