/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** my_lists
*/

#ifndef MY_LISTS_H_
    #define MY_LISTS_H_

typedef struct list_s {
    void *data;
    struct list_s *next;
} list_t;

/**
** @brief Insert a value at the end of a list.
** @param list
** @param value
** @return void
**/
void insert_end_list(list_t **list, void *value);

/**
** @brief Insert a value at the top of a list.
** @param list
** @param value
** @return void
**/
void insert_top_list(list_t **list, void *value);

/**
** @brief Print the list.
** @param list
** @return void
**/
void print_list(list_t *list);

#endif
