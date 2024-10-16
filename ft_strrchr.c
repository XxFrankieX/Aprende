/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:28:19 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/10 22:22:27 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char* int* long* (Todos los punteros miden 8 bytes)

char	*ft_strrchr(const char *s, int c)
{
	const char	*final_c;

	final_c = NULL;
	while (*s) // Deja de entrar cuando aparece un caracter.
	{
		if (*s == (char)c)
			final_c = s;
		s++;
	}
	if (*s == (char) c) // PREGUNTA SI ES *S + 1 o así.
			return ((char *) s);
	return ((char *) final_c);
}

/* int	main(void)
{
	//char *a = ":1234:)HelloThere"; //[:, 1, 2, 3 ,4 ...]
	printf("%p\n", strrchr("\0", 'a'));
	printf("%p", ft_strrchr("\0", 'a'));
	return (0);
} */
