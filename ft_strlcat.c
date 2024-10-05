/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:36:45 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/05 16:17:50 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t u;
	size_t dst_len;
	size_t src_len;
	
	 i = 0;
	 dst_len = ft_strlen(dst);
	 u = 0;
	 src_len = ft_strlen(src);
	 
	if (size == 0)
		return(dst_len + src_len);
	
	while(dst[i] && i < size - 1) //mientras se de el string de dst y el size sea distinto de \0
		i++;
	
	while (src[u] && i + u < size - 1) //Con el size - 1, te aseguras que tenga un carácter reservado para el NULL.
	//Mientras el índice sea menor que el tamaño de bytes y no haya terminando origen.
	{
		dst[i + u] = src[u];
		u++;
	}
	dst[i + u] = '\0'; //Cuando finaliza la iteración, le añade null.
	return (dst_len + src_len);
	
}

int main()
{
	char dst[] = "Hol";
	char src[] = "Adios";
	size_t i;
	
	i = ft_strlcat(dst, src, 6);
	printf("%ld\n", i);
	printf("%s", dst);
	return(0);
}