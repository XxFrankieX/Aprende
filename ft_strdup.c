/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:54:36 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/10 20:01:56 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//La función strdup() devuelve un puntero a una nueva cadena que es un duplicado de la cadena s. La memoria para la nueva cadena se obtiene con malloc(3) y se puede liberar con free(3).
//En caso de éxito, la función strdup() devuelve un puntero a la cadena duplicada.
char	*ft_strdup(const char *s)
{
	char	*cpy;
	size_t	len;

	len = ft_strlen(s);
	cpy = malloc(len);
	if (cpy == 0)
		return (NULL);
	ft_strlcpy(cpy, s, len);

	return(cpy);
}

//PREGUNTA SOBRE EL MAIN
/*
int main()
{
	char u[] = "Hello";
	char e[] = "There";
	
	printf("%s", ft_strdup(u));
}
*/