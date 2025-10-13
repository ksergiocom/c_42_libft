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
###########################################################

all: $(NAME)

$(NAME): 

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
