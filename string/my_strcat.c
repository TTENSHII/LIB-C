/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** strcat
*/

#include <stddef.h>

char *my_strcat(char *dest, const char *src)
{
    int index = 0, index2 = 0;

    if (dest == NULL) return (NULL);
    if (src == NULL) return (dest);

    while (dest[index] != '\0')
        index++;
    while (src[index2] != '\0') {
        dest[index] = src[index2];
        index++;
        index2++;
    }
    dest[index] = '\0';
    return (dest);
}
