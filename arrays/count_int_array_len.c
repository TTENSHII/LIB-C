/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** count_int_array_len
*/

#include <stddef.h>

int count_int_array_len(int *array, int end_value)
{
    int len = 0;

    if (array == NULL)
        return (0);
    for (int i = 0; array[i] != end_value; i++)
        len++;
    return (len);
}
