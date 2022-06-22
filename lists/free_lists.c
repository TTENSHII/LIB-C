/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** free_lists
*/

#include "my_lists.h"
#include <stdlib.h>

void free_list(list_t *list)
{
    list_t *tmp = list;

    while (tmp != NULL) {
        list_t *tmp2 = tmp->next;
        free(tmp);
        tmp = tmp2;
    }
}

void free_double_list(double_list_t *list)
{
    double_list_t *tmp = list;

    while (tmp != NULL) {
        double_list_t *tmp2 = tmp->next;
        free(tmp);
        tmp = tmp2;
    }
}
