/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:36:45 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/11 20:12:35 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	j = 0;
	dst_len = ft_strlen(dst); 
	src_len = ft_strlen(src);
	
	if (dst_len + 1 > size) //+ 1 para reservar el caracter nulo del final.
		return(src_len + size);
	while (dst[i] && i < size - 1) // -1 para reservar el nulo que se pone al final (dst[i+j]. Lo ves abajo?)
		i++;
	while (src[j] && i + j < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0'; // <--------- 
	
	return (dst_len + src_len);
}

/*int main()
{
	char dst[] = "the cake is a lie !\0I'm hidden lol\r\n";
	char dst2[] = "the cake is a lie !\0I'm hidden lol\r\n";
    char src[0xF00] = "there is no stars in the sky";
	size_t max = strlen(dst) + 4;
	size_t i;
	size_t j;

	i = ft_strlcat2(dst, src, max);
	printf("%ld,  dst:%s\n", i, dst);
	j = ft_strlcat(dst2, src, max);
	printf("%ld,  dst:%s", i, dst2);
	return(0);
}   */