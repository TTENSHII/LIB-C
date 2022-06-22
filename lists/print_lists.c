/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** print_lists
*/

#include "my_lists.h"
#include "my_puts.h"

void print_list(list_t *list)
{
    list_t *tmp = list;

    while (tmp) {
        my_putstr(tmp->data);
        tmp = tmp->next;
    }
}

void print_double_list(double_list_t *list)
{
    double_list_t *tmp = list;

    while (tmp) {
        my_putstr(tmp->data);
        tmp = tmp->next;
    }
}
