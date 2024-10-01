/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:51:40 by mconde-s          #+#    #+#             */
/*   Updated: 2024/09/25 17:51:46 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
// El casting de datos en programación se refiere a la conversión de un tipo de dato a otro. 
// Este proceso es esencial para asegurar que los datos se manipulen correctamente y de manera eficiente en diferentes contextos. 
// Por ejemplo, podrías necesitar convertir un número entero a un número decimal para realizar cálculos más precisos.
// Existen dos tipos principales de casting:Widening Casting (Conversión Automática): Se realiza automáticamente cuando se convierte un tipo de dato más pequeño a uno más grande, como de int a double.
// Narrowing Casting (Conversión Manual): Requiere una conversión explícita cuando se convierte un tipo de dato más grande a uno más pequeño, como de double a int//
// La función ft_memset en C se utiliza para llenar un bloque de memoria con un valor específico//
// s: Un puntero al bloque de memoria que se va a llenar.
// c: El valor que se va a copiar en cada byte del bloque de memoria. Este valor se convierte a un unsigned char.
// n: El número de bytes que se van a llenar con el valor c.
// Descripción:
// La función ft_memset llena los primeros n bytes del área de memoria apuntada por s con el valor constante c. Devuelve un puntero al bloque de memoria s.

//La conversión a unsigned char en la función ft_memset se realiza para asegurar que el valor que se va a copiar en cada byte del bloque de memoria sea interpretado correctamente como un byte de 8 bits, sin signo. Aquí hay algunas razones clave para esta conversión:
//
//Compatibilidad de Tipos: unsigned char garantiza que el valor se mantenga en el rango de 0 a 255, lo cual es ideal para representar cualquier byte posible en la memoria.
//Evitar Signo Negativo: Si se usara un char con signo, los valores negativos podrían causar comportamientos inesperados al llenar la memoria, ya que los valores negativos se interpretan de manera diferente en la memoria.
//Consistencia: Al convertir a unsigned char, se asegura que el valor se trate de manera uniforme y consistente en todas las plataformas y compiladores, evitando posibles problemas de portabilidad.

# include "libft.h"
# include <string.h>

void	*ft_memset(void *s, int c, size_t n) //size_t es una forma muy legible para especificar la dimensión del tamaño de un elemento, la longitud de una cadena, cantidad de bytes que toma un puntero, etc
{
	unsigned char *s2; //Se declara un unsigned char puntero para señalar que el valor que va a recibir void *s va a ser un char sin signo para que vaya byte a byte, recuerda que los char tienn 1 byte y los int 4.
	size_t i; //se declara un índice para incializar el tamaño del elemento 

	s2 = (unsigned char *)s; //se señala en el parámetro. Que esté entre paréntesis indica que es el casteo uwu
	i = 0;
	while (i < n) //Mientras índice sea menor que a la cantidad de bytes asignada
	{
		s2[i] = (unsigned char)c; //sustituye el valor de c en el puntero de s2
		i++; //itera
	}
	return(s); //Te devuelve el valor que se encuentra el puntero.
}
/*
int main() {
    char    a[] = "maria";

    ft_memset(a, '$', 8);
    printf("%s\n", a);
    return 0;
}
*/
//si el puntero void no es constante se puede castear automáticamente, en caso de ser constante se necesita una variable auxiliar que te permita transformarla.