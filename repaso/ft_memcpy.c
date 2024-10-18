/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:33:39 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/18 18:48:49 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest2;
	unsigned char	*src2;
	size_t			i;

	if (!dest && !src)
		return (dest);
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}

// int main()
// {
// 	char src[] = "buenas";
// 	char dest[] = "hello";

// 	printf("%s", (char *)ft_memcpy(dest,src, 10));
// 	return(0);
// }
// int main()
// {
// 	int src = 4;
// 	int dest = 5;
// 	printf("%d", (int *)ft_memcpy(&dest, &src, 1));
// 	return(0);
// }
/* int main()
{
	int *n = ft_calloc(1 , sizeof(int));
	int *n2 = ft_calloc(1 , sizeof(int));

	*n = 3;
	*n2 = 2;
	printf("%d", *n2);
	n2 = ft_memcpy(n2, n, sizeof(int));
	printf("%d", *n2);
	return(0);
} */
