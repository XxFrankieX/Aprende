/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:21:05 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/17 11:24:07 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	lens1;
	size_t	new_len;
	size_t	start;
	size_t	end;
	char	*sub;

	if (!s1 || !set)
		return (0);
	start = 0;
	lens1 = ft_strlen(s1);
	end = lens1;
	while (start < lens1 && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	new_len = end - start;
	sub = ft_substr(s1, (unsigned int)start, new_len);
	return (sub);
}
