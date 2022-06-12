/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** count_array_len
*/

#include <stddef.h>

int count_array_len(char **array)
{
    int i = 0;

    if (array == NULL)
        return (0);
    while (array[i] != NULL) {
        i += 1;
    }
    return (i);
}
