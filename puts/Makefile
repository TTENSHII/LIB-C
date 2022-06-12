##
## EPITECH PROJECT, 2022
## LIB-C
## File description:
## Makefile
##

NAME = my_puts.a

SRC = my_putchar.c\
	my_putstr.c\
	my_puterror.c\
	my_putnbr.c

OBJ = $(SRC:.c=.o)

CFLAGS += -I../includes/

all: $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
