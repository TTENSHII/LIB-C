/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** print_int_array
*/

#include <stddef.h>
#include "my_puts.h"

void print_int_array(int *array, int size)
{
    if (array == NULL)
        return;
    for (int i = 0; i < size; i++) {
        my_putnbr(array[i]);
        my_putchar(' ');
    }
    my_putchar('\n');
}
