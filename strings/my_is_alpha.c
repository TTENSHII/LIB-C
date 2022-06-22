/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** is_alpha
*/

#include <stdbool.h>

bool is_alpha(char c)
{
    if (c >= 'a' && c <= 'z')
        return (true);
    if (c >= 'A' && c <= 'Z')
        return (true);
    return (false);
}
