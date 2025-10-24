# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sekhudol <sekhudol@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/15 14:50:42 by sekhudol          #+#    #+#              #
#    Updated: 2025/10/24 22:37:56 by sekhudol         ###   ########.fr        #
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
SOURCES = 	ft_atoi.c			\
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

SOURCES_BONUS = ft_lstadd_back_bonus.c 	\
			   ft_lstadd_front_bonus.c 	\
			   ft_lstclear_bonus.c		\
			   ft_lstdelone_bonus.c		\
			   ft_lstiter_bonus.c		\
			   ft_lstlast_bonus.c		\
			   ft_lstmap_bonus.c		\
			   ft_lstnew_bonus.c		\
			   ft_lstsize_bonus.c		

# Todos los fuentes pero cambiando el sufijo
OBJECTS = $(SOURCES:.c=.o)
OBJECTS_BONUS = $(SOURCES_BONUS:.c=.o)

###########################################################

# Regla que se lanza por defecto
all: $(NAME)

# Regla para generar el `libft.a`
$(NAME): $(OBJECTS) libft.h
	ar rcs $(NAME) $(OBJECTS)

bonus:	$(OBJECTS_BONUS) libft.h $(NAME)
	ar rs $(NAME) $(OBJECTS_BONUS)

# Generar todos los .o; teniendo como dependencias
# todos los ficheros .c
# $< es la primera dependencia 
# $@ es el nombre
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

# Rebuild, borrar todo y generar todo
re: fclean all

# clean + Borrar el fichero principal generado
fclean: clean 
	rm -f $(NAME)

# Borrar los .o y posibles a.out
clean:
	rm -f *.o a.out

###########################################################
