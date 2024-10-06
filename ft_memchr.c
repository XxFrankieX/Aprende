/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:47:39 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/06 20:58:07 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memchr(const void *s, int c, size_t n)
{
	unsigned char *s1;
	size_t i;
	
	s1 = (unsigned char *)s;
	i = 0;

	while (n > i && s1[i] && s1[i] != (char)c)
		i++;
	return(*s1);
}
int main()
{
	char a[]
}