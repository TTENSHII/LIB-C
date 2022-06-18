/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** my_strrev
*/

#include <stddef.h>
#include "my_strings.h"

char *my_strrev(char *str)
{
    int len = my_strlen(str);
    char temp = '\0';

    if (str == NULL)
        return (NULL);
    for (int index = 0; index < len; index++) {
        temp = str[index];
        str[index] = str[len - 1];
        str[len - 1] = temp;
        len--;
    }
    return (str);
}
