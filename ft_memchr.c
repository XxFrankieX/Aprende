/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:47:39 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/10 20:43:25 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// con los corchetes lo desplazas y accedes y con esto coge s1 y lo mueve i caracteres.

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	size_t			i;

	s1 = (unsigned char *)s;
	i = 0;
	c = (unsigned char)c;
	while (i < n)
	{
		if (s1[i] == c)
			return (s1 + i); // Te devuelve la posición en la que se encuentra.
		i++;
	}
	return (NULL);
}
/* int	main(void)
{
	char a[] = "HelloThere";
	char *b;
	b = ft_memchr(a, 'e', 4);
	printf("%c", (*b));
	return (0);
} */