/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** my_strcasecmp
*/

#include "my_strings.h"
#include <stddef.h>

static void upper_to_lower(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i += 1;
    }
}

int my_strcasecmp(char const *s1, char const *s2)
{
    int index = 0;
    char *str1 = my_strdup(s1);
    char *str2 = my_strdup(s2);

    if (str1 == NULL || str2 == NULL)
        return (0);
    upper_to_lower(str1);
    upper_to_lower(str2);
    while (str1[index] != '\0' && str2[index] != '\0') {
        if (str1[index] != str2[index])
            return (str1[index] - str2[index]);
        index += 1;
    }
    return (str1[index] - str2[index]);
}
