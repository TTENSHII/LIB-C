/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** my_puterror
*/

#include <unistd.h>

int my_putstr(char const *str)
{
    int size = 0;

    while (str[size] != '\0') {
        size++;
    }
    write(2, str, size);
    return (size);
}
