# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mconde-s <mconde-s>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/27 17:34:13 by mconde-s          #+#    #+#              #
#    Updated: 2024/10/10 20:00:59 by mconde-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Atajos en visual: ctrl + shift + P -> Se abre una barra de búsqueda de comandos en visual
# Ctrl + shift + 7 -> comenta
#Ctrl + ` + shift -> te abre una nueva terminal y ctrl + d -> te la cierra
#ctrl + d + d -> selecciona varias palabras y se las puede modificar.
#ctrl + shift + cualquier flecha -> selecciona líneas.
#shift + flechas -> selecciona letras. ctrl k
# + c o + u -> comentar
#ctrl + l -> Se borran las cosas de la terminal.
#ctrl + w -> Se borra palabra por palabra

NAME = libft.a #El resultado que quiero llegar 

#Señalo los archivos .c
C_FILES =	ft_isalpha.c \
			ft_memchr.c \
			ft_strchr.c \
			ft_strncmp.c \
			ft_toupper.c \
			ft_atoi.c \
			ft_isascii.c \
			ft_memcpy.c \
			ft_strlcat.c \
			ft_strnstr.c \
			ft_bzero.c \
			ft_isdigit.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strrchr.c \
			ft_isalnum.c \
			ft_isprint.c \
			ft_memset.c \
			ft_strlen.c \
			ft_tolower.c \
			ft_calloc.c \
			ft_strdup.c
			

O_FILES = ${patsubst %.c, %.o, ${C_FILES}} # Reemplaza los ".c" por ".o" en todo el string ${C_FILES}. EL % es lo mismo que el * en *.a, que significa "cualquier número de carácteres junto con el .c al final"
#patsubst es un comando que significa path substitute y los reemplaza según las normas dadas.

all: ${NAME} #Señala que all tiene que compilar NAME (variable)

clean: #elimina todos los  .o
	@echo "Cleaning..."
	@ rm $(O_FILES)

fclean: clean #elimina los .o y también elimina NAME para ejecutarlo las veces que quiera porque si no dice que no hay nada que cambiar.
	@ rm ${NAME}
re: fclean all
${NAME}: ${O_FILES} #Para conseguir Libft.a se necesitan los .o que están en la variable O_FILES. Cuando no es una target y se pone VARIABLE: VARIABLE2, estás diciendo cómo convertir la VARIABLE2 en la VARIABLE1.
	ar -rsc ${NAME} $? 
#ar es un comando de archive. r te acepta .o de entrada (parámetro). s le pides que cree un .a. La c, le pides que te añada un índice para linkear de forma optimizada.

%.o: %.c #transforma los .c en .o y se queda a medio compilar. El .a compila los archivos por seprado y luego los une.

	cc -c -Wall -Wextra -Werror $?

# $? pasa un archivo uno por uno al comando de los de la derecha (en este caso)