/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:28:19 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/17 11:23:41 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*final_c;

	final_c = NULL;
	while (*s)
	{
		if (*s == (char)c)
			final_c = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return ((char *)final_c);
}

/* int	main(void)
{
	//char *a = ":1234:)HelloThere"; //[:, 1, 2, 3 ,4 ...]
	printf("%p\n", strrchr("\0", 'a'));
	printf("%p", ft_strrchr("\0", 'a'));
	return (0);
} */
