/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** my_strlen
*/

#include <stddef.h>

int my_strlen(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (0);

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
