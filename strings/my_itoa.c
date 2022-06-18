/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** my_itoa
*/

#include <stdlib.h>

char *my_itoa(int nb)
{
    int nb_size = 1;

    for (int temp = nb; temp >= 10; temp = temp / 10)
        nb_size += 1;
    char *str = malloc(sizeof(char) * nb_size + 1);
    str[nb_size] = '\0';
    nb_size -= 1;
    while (nb_size >= 0) {
        str[nb_size] = nb % 10 + 48;
        nb = nb / 10;
        nb_size -= 1;
    }
    return (str);
}
