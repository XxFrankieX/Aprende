/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:28:19 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/05 18:40:04 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	while(*s++)
	while (*s > 0)
	{
		if (*(s - 1) != (char)c)
		s--;
	}
	return((char *)s);
}

int main()
{
	char a[] = "HelloThere1232";

	printf("%s", ft_strrchr(a, 'e'));
	return(0);
}
