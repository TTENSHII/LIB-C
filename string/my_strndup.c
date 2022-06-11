/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** my_strndup
*/

#include <stddef.h>
#include <stdlib.h>

char *my_strdup(const char *str)
{
    int i = 0;
    char *str2 = NULL;

    if (str == NULL)
        return (NULL);
    for (i = 0; str[i] != '\0'; i += 1);
    str2 = malloc(sizeof(char) * i + 1);
    for (i = 0; str[i] != '\0'; i += 1) {
        str2[i] = str[i];
    }
    str2[i] = '\0';
    return(str2);
}
