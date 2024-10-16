# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mconde-s <mconde-s>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/27 17:34:13 by mconde-s          #+#    #+#              #
#    Updated: 2024/10/16 14:01:39 by mconde-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a 

C_FILES = ft_bzero.c \
          ft_isalnum.c\
          ft_isascii.c\
          ft_isprint.c\
          ft_memcpy.c \
          ft_memset.c \
          ft_strdup.c \
          ft_strlcpy.c\
          ft_strncmp.c\
          ft_strrchr.c\
          ft_tolower.c\
          ft_atoi.c\
          ft_calloc.c\
          ft_isalpha.c\
          ft_isdigit.c\
          ft_memchr.c \
          ft_memmove.c\
          ft_strchr.c \
          ft_strlcat.c\
          ft_strlen.c \
          ft_strnstr.c\
          ft_substr.c \
          ft_toupper.c \
          ft_strjoin.c \
          ft_memcmp.c \
          ft_strtrim.c \
          ft_putchar_fd.c \
          ft_putstr_fd.c \
          ft_putendl_fd.c \
          ft_putnbr_fd.c \
          ft_strmapi.c \
          ft_split.c \
          ft_itoa.c

O_FILES = ${patsubst %.c, %.o, ${C_FILES}} 

all: ${NAME} 
clean: 
	@echo "Cleaning..."
	@ rm -f $(O_FILES)

fclean: clean 
	@ rm -f ${NAME}
re: fclean all
${NAME}: ${O_FILES} 
	ar -rsc ${NAME} $? 


%.o: %.c 
	cc -c -g -Wall -Wextra -Werror $?

.PHONY: all clean fclean re