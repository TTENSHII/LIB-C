##
## EPITECH PROJECT, 2022
## LIB-C
## File description:
## Makefile
##

NAME = LIBC.a

LIB_PUTS = puts/my_puts.a

LIB_STRING = strings/my_strings.a

LIB_LISTS = lists/my_lists.a

LIB_ARRAYS = arrays/my_arrays.a

LIB_OTHERS = others/my_others.a

ALL_LIBS = $(LIB_PUTS) $(LIB_STRING) $(LIB_LISTS) $(LIB_ARRAYS) $(LIB_OTHERS)

# -----------------------------------

%.a:
	@$(MAKE) -C $(dir $@) all

all: $(ALL_LIBS)
	ar rcT $(NAME) $(ALL_LIBS)

clean:
	@$(MAKE) -C $(dir $(LIB_PUTS)) clean
	@$(MAKE) -C $(dir $(LIB_STRING)) clean
	@$(MAKE) -C $(dir $(LIB_LISTS)) clean
	@$(MAKE) -C $(dir $(LIB_ARRAYS)) clean
	@$(MAKE) -C $(dir $(LIB_OTHERS)) clean

fclean: clean
	rm -f $(NAME) $(ALL_LIBS)

re: fclean all
