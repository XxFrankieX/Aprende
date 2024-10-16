/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:54:36 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/14 18:49:00 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//La función strdup() devuelve un puntero a una nueva cadena que es un duplicado de la cadena s. La memoria para la nueva cadena se obtiene con malloc(3) y se puede liberar con free(3).
//En caso de éxito, la función strdup() devuelve un puntero a la cadena duplicada.
char	*ft_strdup(const char *s)
{
	char	*cpy;
	size_t	len;

	len = ft_strlen(s) + 1; // 6
	cpy = ft_calloc((len) , sizeof(char)); // 6
	if(!cpy)
		return(NULL);
	ft_memcpy(cpy, s, len); // 6
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