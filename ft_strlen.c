/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:03:43 by mconde-s          #+#    #+#             */
/*   Updated: 2024/09/24 14:03:45 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#
#include "libft.h"
//Esta función determina la longitud de serie excluyendo el carácter nulo al final.
size_t	ft_strlen(const char *s)
{
	size_t	i; //Determina la cantidad de bytes que va  tomar un puntero.

	i = 0;
	while (s[i]) //Mientras se de el string entero
		i++;
	return (i); //Te va a devolver la cantidad de bytes que hay en el string.
}

// int	main(void)
// {
// 	char a[25] = "buenastardeshola";
// 	printf("%zu\n", ft_strlen(a));
// 	printf("%lu\n", sizeof(size_t));
// 	return (0);
// }