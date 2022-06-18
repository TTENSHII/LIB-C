/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** add
*/


#include <stdlib.h>
#include "my_lists.h"

void insert_end_list(list_t **list, void *value)
{
    if (value == NULL)
        return;

    list_t *new = malloc(sizeof(list_t));
    if (new == NULL)
        return;
    new->data = value;
    new->next = NULL;
    if (*list == NULL) {
        *list = new;
    } else {
        list_t *tmp = *list;
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = new;
    }
}

void insert_top_list(list_t **list, void *value)
{
    if (value == NULL)
        return;

    list_t *new = malloc(sizeof(list_t));
    if (new == NULL)
        return;
    new->data = value;
    new->next = NULL;
    if (*list == NULL) {
        *list = new;
    } else {
        new->next = *list;
        *list = new;
    }
}
