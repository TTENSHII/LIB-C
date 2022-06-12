##
## EPITECH PROJECT, 2022
## LIB-C
## File description:
## Makefile
##

NAME = LIBC.a

LIB_STRING = string/my_string.a

LIB_PUTS = puts/my_puts.a

ALL_LIBS =	$(LIB_STRING) $(LIB_PUTS)

# -----------------------------------

%.a:
	@$(MAKE) -C $(dir $@) all

all: $(ALL_LIBS)
	ar rcT $(NAME) $(ALL_LIBS)

clean:
	@$(MAKE) -C $(dir $(LIB_PUTS)) clean
	@$(MAKE) -C $(dir $(LIB_STRING)) clean

fclean: clean
	rm -f $(NAME) $(ALL_LIBS)

re: fclean all
