# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mconde-s <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/27 17:34:13 by mconde-s          #+#    #+#              #
#    Updated: 2024/09/27 17:34:16 by mconde-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Atajos en visual: ctrl + shift + P -> Se abre una barra de búsqueda de comandos en visual
# Ctrl + shift + 7 -> comenta
#Ctrl + ` + shift -> te abre una nueva terminal y ctrl + d -> te la cierra
#ctrl + d + d -> selecciona varias palabras y se las puede modificar.
#ctrl + shift + cualquier flecha -> selecciona líneas.
#shift + flechas -> selecciona letras.

NAME = libft.a #El resultado que quiero llegar 

#Señalo los archivos .c
C_FILES =	ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strlen.c \
			ft_tolower.c \
			ft_toupper.c

O_FILES = ${patsubst %.c, %.o, ${C_FILES}} # Reemplaza los ".c" por ".o" en todo el string ${C_FILES}. EL % es lo mismo que el * en *.a, que significa "cualquier número de carácteres junto con el .c al final"
#patsubst es un comando que significa path substitute y los reemplaza según las normas dadas.

all: #compila
#Es una target y ejecuta todos los comandos que hay dentro.
	 ${C_FILES} 

clean: #elimina todos los  .o
	-rm $(O_FILES)

fclean: clean #elimina los .o y también elimina NAME para ejecutarlo las veces que quiera porque si no dice que no hay nada que cambiar.
	-rm ${NAME}

all: ${NAME} #Señala que all tiene que compilar NAME (variable)

${NAME}: ${O_FILES} #Para conseguir Libft.a se necesitan los .o que están en la variable O_FILES. Cuando no es una target y se pone VARIABLE: VARIABLE2, estás diciendo cómo convertir la VARIABLE2 en la VARIABLE1.
	ar -rsc ${libft.a} $?

%.o: %.c #transforma los .c en .o y se queda a medio compilar. El .a compila los archivos por seprado y luego los une.

	cc -c -Wall -Wextra -Werror $?

# $? pasa un archivo uno por uno al comando de los de la derecha (en este caso)