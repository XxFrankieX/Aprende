/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:16:27 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/17 11:23:23 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len && little[j] != 0)
			j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (0);
}
// int	main(void)
// {
// 	char	a[] = "HelloThere";
// 	char	b[] = "There";

// 	printf("%s", ft_strnstr(a, b, 11));
// 	return (0);
// }
