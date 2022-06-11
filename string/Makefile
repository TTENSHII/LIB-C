##
## EPITECH PROJECT, 2022
## LIB-C
## File description:
## Makefile
##

NAME = lib_string.a

src = strcat.c

OBJ = $(SRC:.c=.o)

CFLAGS += -Iincludes/

all: $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
