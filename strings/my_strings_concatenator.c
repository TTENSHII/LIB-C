/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** my_strings_concatenator
*/

#include <stdarg.h>
#include <stdlib.h>
#include <stdbool.h>
#include "my_strings.h"

static int count_size(va_list ap, char *first_str)
{
    int i = my_strlen(first_str) + 1;
    char *str = NULL;

    while (1) {
        str = va_arg(ap, char *);
        if (str == NULL)
            break;
        i += (my_strlen(str) + 1);
    }
    va_end(ap);
    return (i);
}

static char *concatenate_all(va_list ap, char *first_str, int size, bool space)
{
    char *new = malloc(sizeof(char) * size + 1);
    char *tmp = NULL;

    my_strcpy(new, first_str);
    if (space == true)
        my_strcat(new, " ");
    tmp = va_arg(ap, char *);
    while (tmp != NULL) {
        my_strcat(new, tmp);
        if (space == true)
            my_strcat(new, " ");
        tmp = va_arg(ap, char *);
    }
    va_end(ap);
    return (new);
}

char *my_strings_concatenator(bool space, char *str, ...)
{
    int str_size = 0;
    char *new_str = NULL;

    if (str == NULL)
        return (NULL);
    va_list ap;
    va_start(ap, str);
    str_size = count_size(ap, str);
    va_start(ap, str);
    new_str = concatenate_all(ap, str, str_size, space);
    return (new_str);
}
