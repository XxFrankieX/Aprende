/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:36:45 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/02 18:50:20 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t dst_len;
	
	 i = 0;
	 dst_len = ft_strlen(dst);

	while(dst[i] && size && i < size - 1) //mientras se de la string de dst y el size sea distinto de \0
	{
		i++; //Se va iterando
		if (dst[i] == '\0') //Si dst es igual al final,º
		{
			while ((i < size - 1) && (src[i])) //Con el size - 1, te asseguras que tenga un carácter reservado para el NULL.
			//Mientras el índice sea menor que el tamaño de bytes y no haya terminando origen.
			{
				dst[i] = src[i - dst_len];
				i++;
			}
			break ;
		}	
	}
	if (size != 0)
		dst[i] = 0;
	
	return (dst_len + ft_strlen(src));
	
}

int main()
{
	char dst[] = "HelloT";
	char src[] = "Ist";

	ft_strlcat(dst, src, 20);
	printf("%zu", ft_strlen(dst));
	return(0);
}