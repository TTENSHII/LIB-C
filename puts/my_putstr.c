/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** my_putstr
*/

#include <unistd.h>

int my_putstr(char const *str)
{
    int size = 0;

    while (str[size] != '\0') {
        size++;
    }
    write(1, str, size);
    return (size);
}
