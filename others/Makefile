##
## EPITECH PROJECT, 2022
## LIB-C
## File description:
## Makefile
##

NAME = my_others.a

SRC = convert_number_base.c\
	my_sqrt.c

OBJ = $(SRC:.c=.o)

CFLAGS += -I../includes/

all: $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
