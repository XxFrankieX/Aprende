/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:54:36 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/17 11:19:43 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;
	size_t	len;

	len = ft_strlen(s) + 1;
	cpy = ft_calloc((len), sizeof(char));
	if (!cpy)
		return (NULL);
	ft_memcpy(cpy, s, len);
	return (cpy);
}

/*
int	main(void)
{
	char	u[] = "Hello";
	char	e[] = "There";

	printf("%s", ft_strdup(u));
}
*/