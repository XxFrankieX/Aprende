/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:03:43 by mconde-s          #+#    #+#             */
/*   Updated: 2024/09/24 14:03:45 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(void)
{
	char a[25] = "buenastardeshola";
	printf("%zu\n", ft_strlen(a));
	printf("%lu\n", sizeof(size_t));
	return (0);
}