/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** free_array
*/

#include <stddef.h>
#include <stdlib.h>

void free_array(char **array)
{
    int i = 0;

    if (array == NULL)
        return;
    while (array[i] != NULL) {
        free(array[i]);
        i += 1;
    }
    free(array);
}
