/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** is_digit
*/

#include <stdbool.h>

bool is_digit(char c)
{
    if (c >= '0' && c <= '9')
        return (true);
    return (false);
}
