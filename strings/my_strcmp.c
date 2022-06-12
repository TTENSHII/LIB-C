/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** my_strcmp
*/

#include <stdlib.h>
#include <stdio.h>

int my_strcmp(char *s1, char *s2)
{
    int index = 0;

    while (s1[index] != '\0' && s2[index] != '\0') {
        if (s1[index] != s2[index])
            return (s1[index] - s2[index]);
        index += 1;
    }
    return (s1[index] - s2[index]);
}
