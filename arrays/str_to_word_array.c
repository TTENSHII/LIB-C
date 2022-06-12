/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** str_to_word_array
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

static int is_accept(char c)
{
    if (c >= '!' && c <= '~')
        return (1);
    return (0);
}

static int word_size(char *str, int index)
{
    for (;str[index] != '\0'; index ++) {
        if (str[index] < '!' && str[index] > '~')
            return (index);
    }
    return (index);
}

char **my_str_to_word_array(char *str)
{
    char **array = NULL;
    if (str == NULL)
        return (NULL);
    int j = 0, i_str = 0, nb_words = 0, i = 0;
    for (int index = 0; str[index] != '\0'; index += 1) {
        if (is_accept(str[index + 1]) == 0)
            nb_words += 1;
    }
    array = malloc(sizeof(char *) * (nb_words + 1));
    for (i = 0; i < nb_words; i += 1) {
        array[i] = malloc(sizeof(char) * word_size(str, i_str) + 1);
        for (j = 0; is_accept(str[i_str]) != 0 && str[i_str] != '\0'; j += 1) {
            array[i][j] = str[i_str];
            i_str += 1;
        }
        array[i][j] = '\0';
        i_str += 1;
    }
    array[i] = NULL;
    return (array);
}
