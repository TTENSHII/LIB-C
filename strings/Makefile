##
## EPITECH PROJECT, 2022
## LIB-C
## File description:
## Makefile
##

NAME = my_strings.a

SRC = my_strcasecmp.c\
	my_strcasestr.c\
	my_strcat.c\
	my_strcmp.c\
	my_strcpy.c\
	my_strdup.c\
	my_strlen.c\
	my_strncasecmp.c\
	my_strncat.c\
	my_strncmp.c\
	my_strncpy.c\
	my_strndup.c\
	my_strstr.c\
	my_strrev.c\
	my_itoa.c\
	my_atoi.c\
	my_atof.c

OBJ = $(SRC:.c=.o)

CFLAGS += -I../includes/

all: $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
