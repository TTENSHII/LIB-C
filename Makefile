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

# -----------COLORS----------------
GREEN = '\033[32m'
RESET = '\033[0m'

# -----------MAKEFILE----------------

%.a:
	@$(MAKE) -C $(dir $@) all

all: $(ALL_LIBS)
	ar rcT $(NAME) $(ALL_LIBS)
	@echo -e $(GREEN)'[LIB $(NAME)] done'$(RESET)

clean:
	@$(MAKE) -C $(dir $(LIB_PUTS)) clean
	@$(MAKE) -C $(dir $(LIB_STRING)) clean
	@$(MAKE) -C $(dir $(LIB_LISTS)) clean
	@$(MAKE) -C $(dir $(LIB_ARRAYS)) clean
	@$(MAKE) -C $(dir $(LIB_OTHERS)) clean

fclean: clean
	rm -f $(NAME) $(ALL_LIBS)

re: fclean all
