# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sekhudol <sekhudol@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/15 14:50:42 by sekhudol          #+#    #+#              #
#    Updated: 2025/10/16 17:20:52 by sekhudol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

###########################################################
# Manual de: make
# https://www.gnu.org/software/make/manual/make.html
# Videotutoriales:
# https://www.youtube.com/watch?v=Ifo16mlkuq8
###########################################################

### Variables #############################################
CFLAGS = -Wall -Wextra -Werror
CC = cc
NAME = libft.a
SOURCES = ft_atoi.c						\
					ft_bzero.c			\
					ft_calloc.c			\
					ft_isalnum.c 		\
					ft_isalpha.c		\
					ft_isascii.c		\
					ft_isdigit.c		\
					ft_isprint.c		\
					ft_itoa.c			\
					ft_memchr.c			\
					ft_memcmp.c			\
					ft_memcpy.c			\
					ft_memmove.c		\
					ft_memset.c			\
					ft_putchar_fd.c		\
					ft_putendl_fd.c		\
					ft_putnbr_fd.c		\
					ft_putstr_fd.c		\
					ft_split.c			\
					ft_strchr.c			\
					ft_strdup.c			\
					ft_striteri.c		\
					ft_strjoin.c		\
					ft_strlcat.c		\
					ft_strlcpy.c		\
					ft_strlen.c			\
					ft_strmapi.c		\
					ft_strncmp.c		\
					ft_strnstr.c		\
					ft_strrchr.c		\
					ft_strtrim.c		\
					ft_substr.c			\
					ft_tolower.c		\
					ft_toupper.c		\
					ft_skip_separator.c	

BONUS_SOURCES = ft_lstnew.c				\
				ft_lstadd_front.c		\
				ft_lstsize.c				

# Todos los fuentes pero cambiando el sufijo
OBJECTS = $(SOURCES:.c=.o)

BONUS_OBJECTS = $(BONUS_SOURCES:.c=.o)
###########################################################

# Regla que se lanza por defecto
all: $(NAME)

# Regla para generar el `libft.a`
$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

# BONUS
bonus : $(BONUS_OBJECTS) $(NAME)
	ar rs $(NAME) $(BONUS_OBJECTS)

# Generar todos los .o; teniendo como dependencias
# todos los ficheros .c
# $< es la primera dependencia 
# $@ es el nombre
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rebuild, borrar todo y generar todo
re: fclean all

# clean + Borrar el fichero principal generado
fclean: clean
	rm -f $(NAME)

# Borrar los .o y posibles a.out
clean:
	rm -f *.o a.out
