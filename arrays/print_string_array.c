/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** print_string_array
*/

#include <stddef.h>
#include "my_puts.h"

void print_string_array(char **array)
{
    if (array == NULL)
        return;
    for (int i = 0; array[i] != NULL; i += 1) {
        my_putstr(array[i]);
        my_putchar('\n');
    }
}
