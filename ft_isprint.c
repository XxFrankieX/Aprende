/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:04:28 by mconde-s          #+#    #+#             */
/*   Updated: 2024/09/18 17:04:37 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int	main(void)
//{
//	int a;
//	int b;
//
//	a = 128;
//	b = 'a';
//
//	printf("%d\n", ft_isprint(a));
//	printf("%d", ft_isprint(b));
//
//	return (0);
//}