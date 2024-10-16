/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:54:16 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/16 16:24:27 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//La diferencia entre calloc y malloc es que en malloc se señala únicamente los bytes que se quieren reservar y en calloc se especifica. Inicializa todos los bit del espacio reservado a 0.
//Devuelve una direcciónde memoria. Malloc simplemente guarda esa memoria y puede tener cosas escritas. Calloc guarda  esa memoria y la incializa con 0.
//También hay que liberar el espacio de memoria.
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char *a;
	size_t total_size;
	
	total_size = nmemb * size;
	if (total_size < size || nmemb > total_size)
		return(NULL);
	a = malloc(nmemb * size);
	if (a == 0)
		return(0);
	
	ft_bzero(a, total_size);
	
	return(a);
	
}
/* int main()
{
	char *a;
	a = ft_calloc(0, sizeof(char));
	return(0);
} */