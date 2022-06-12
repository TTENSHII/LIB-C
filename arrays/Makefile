##
## EPITECH PROJECT, 2022
## LIB-C
## File description:
## Makefile
##

NAME = my_arrays.a

SRC = count_array_len.c\
	free_array.c\
	print_int_array.c\
	print_string_array.c\
	str_to_word_array.c\
	count_int_array_len.c

OBJ = $(SRC:.c=.o)

CFLAGS += -I../includes/

all: $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
