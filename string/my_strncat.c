/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** strncat
*/

#include <stddef.h>

char *my_strncat(char *dest, const char *src, size_t n)
{
    int index = 0, index2 = 0;

    if (dest == NULL)
        return (NULL);
    if (src == NULL)
        return (dest);

    while (dest[index] != '\0')
        index++;
    while (src[index2] != '\0' && index2 < n) {
        dest[index] = src[index2];
        index++;
        index2++;
    }
    dest[index] = '\0';
    return (dest);
}
