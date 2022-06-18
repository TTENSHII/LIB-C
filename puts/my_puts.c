/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** my_puts
*/

#include "my_strings.h"
#include <unistd.h>

int my_puts(char const *str)
{
    int size = 0;

    if (str == NULL)
        return (0);
    size = my_strlen(str);
    write(1, str, size);
    write(1, "\n", 1);
    return (size);
}
