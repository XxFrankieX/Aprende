/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:28:19 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/09 16:33:32 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char* int* long* (Todos los punteros miden 8 bytes)

char	*ft_strrchr(const char *s, int c)
{
	while (*s) // Mientras no llegue al caracter nulo, sigue iterando
		s++;
	while (*s >= 0)
		// Mientras que el caracter sea mayor o igual a 0 (la primera posición)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}

/* int	main(void)
{
	char *a = ":1234:)HelloThere"; //[:, 1, 2, 3 ,4 ...]
	printf("%s", ft_strrchr(a, ':'));
	return (0);
}
 */