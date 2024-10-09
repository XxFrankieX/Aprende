/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:47:15 by mconde-s          #+#    #+#             */
/*   Updated: 2024/10/09 16:22:08 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		sign;
	int		result;
	size_t	i;

	i = 0;
	result = 0;
	sign = 1;
	// Aquí se está pidiendo que itere si encuentra espacios en blanco.
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\0'
		|| nptr[i] == '\t' || nptr[i] == '\v' || nptr[i] == '\r'
		|| nptr[i] == '\f')
		i++;
	// Si dentro de string hay un -, se declara el
	//-1 que luego se va a usar para saber que el resultado que nos tiene que dar es negrativo.
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	// También le pedimos que itere si encuentra un +
	else if (nptr[i] == '+')
		i++;
	// Mientras la string sea mayor y menor que 0 y 9...
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result *= 10;
		result += (nptr[i] - '0') * sign;
			// Para pedirle los números se hace el siguiente cálculo. 12345 12342
		// Imaginemos resultado = 1 * 10 -> (10) + (50 - 48) -> (2) = 	120
		i++;
	}
	return (result); // Como inicializo result en 0, si no hay nada válido, te devuelve 0.
}

/* int main()
{
	char a[] = "         -123-4";
	printf("%d", ft_atoi(a));
	return(0);
} */