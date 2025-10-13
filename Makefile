###########################################################
# Manual de: make
# https://www.gnu.org/software/make/manual/make.html
# Videotutoriales:
# https://www.youtube.com/watch?v=Ifo16mlkuq8
###########################################################

### Variables #############################################
CFLAGS = -Wall -Wextra -Werror
CC = cc
###########################################################

%.o: %.c


clean:
	rm -f *.o a.out
