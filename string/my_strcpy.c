/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** strcpy
*/

#include <stdio.h>

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    if (src == NULL || dest == NULL)
        return (NULL);

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
