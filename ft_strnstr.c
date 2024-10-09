/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:16:27 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/09 16:32:52 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Con la funcion strnstr puedes buscar una cadena mas pequeña dentro de otra cadena mas grande pasandole un total de n caracteres,
// eso te devuelve un puntero al inicio de la cadena y lo puedes usar para a partir de ahi sustituir n caracteres de la cadena principal.
// VALORES DE RETORNO
// Si little es una cadena vacía, se devuelve big;
// si little no aparece en ninguna parte de big,
//se devuelve NULL; de lo contrario,
//se devuelve un puntero al primer carácter de la primera ocurrencia de little.

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len && little[j] != 0)
			j++;
		if (little[j] == '\0')
			return ((char *)big + i); // es big + i porque despues de entrar en todo el while,, i se encontra
		i++;
	}
	return (0);
}
int	main(void)
{
	char	a[] = "HelloThere";
	char	b[] = "There";

	printf("%s", ft_strnstr(a, b, 11));
	return (0);
}
/*while (i < len && big[i])
	{
		while (big[i] != little[i] && big[i] != little[i + 1])
		{
			i++;
			return(little[i] + i);
		}


		if (big[i] == little[i] && little[i] == '\0')
		{
			i++;
			return((char *)&big[i]);
		}
		i++;
		return(0);
	}*/
