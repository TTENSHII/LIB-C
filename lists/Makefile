##
## EPITECH PROJECT, 2022
## LIB-C
## File description:
## Makefile
##

NAME = my_lists.a

SRC = add_in_list.c\
	print_lists.c\
	free_lists.c

OBJ = $(SRC:.c=.o)

CFLAGS += -I../includes/

all: $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
