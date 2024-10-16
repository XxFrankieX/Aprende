/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:10:20 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/15 21:13:33 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t len_s;

	len_s = ft_strlen(s);

	if (!s)
		return (NULL);
	if (len > __SIZE_MAX__)
		len = __SIZE_MAX__;
	if (start >= len_s)
		return (ft_strdup(""));
	if(len > len_s - start) //para utilizar la memoria que se necesita por si te dan una memoria superior.
		len = len_s - start;
	sub = ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return(NULL);
	ft_strlcpy(sub, (s + start), len + 1);
	return (sub);
}

 /* int	main(void)
{
	// char	a[] = "hola";
	char * test =  ft_substr("tripouille", 0, 42000);
	printf("salio -> %s", test);
	free(test);
	return (0);
} */

//compile -g ft_substr.c ft_strlen.c ft_strdup.c ft_calloc.c ft_memcpy.c ft_bzero.c
