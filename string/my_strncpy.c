/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** my_strncpy
*/

#include <stddef.h>

char *my_strncpy(char *dest, char const *src, size_t n)
{
    int i = 0;

    if (src == NULL || dest == NULL)
        return (NULL);

    while (src[i] != '\0' && i < n) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
