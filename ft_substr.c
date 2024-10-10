/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:10:20 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/10 19:58:53 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	if (!s)
	{
		return (NULL);
	}
	i = (size_t) start;
	j = 0;
	sub = malloc(len + 1);
		//+1 porque todas las string tienen que terminar en \0
	while (j < len && s[i + j])
	{
		sub[j] == s[i + j];
		j++;
	}
	if (sub == 0)
		return (NULL);
	return (sub);
}

int	main(void)
{
	char	a[] = "HelloThere";

	printf("%s", ft_substr(a, 'T', 2));
	return (0);
}
