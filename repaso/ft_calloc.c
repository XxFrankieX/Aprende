/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:54:16 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/18 17:54:09 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*a;
	size_t	total_size;

	total_size = nmemb * size;
	if (total_size < size || nmemb > total_size)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == 0)
		return (0);
	ft_bzero(a, total_size);
	return (a);
}
// int main()
// {
// 	char *a;
// 	a = ft_calloc(0, sizeof(char));
// 	return(0);
// } 