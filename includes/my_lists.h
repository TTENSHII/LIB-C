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

typedef struct double_list_s {
    void *data;
    struct double_list_s *next;
    struct double_list_s *prev;
} double_list_t;

/**
** @brief Insert a value at the end of a list.
** @param list
** @param value
** @return void
**/
void insert_end_list(list_t **list, void *value);

/**
** @brief Insert a value at the end of a list.
** @param double_linked_list
** @param value
** @return void
**/
void insert_end_double_list(double_list_t **list, void *value);

/**
** @brief Insert a value at the end of a list.
** @param double_linked_list
** @param value
** @return void
**/
void insert_top_double_list(double_list_t **list, void *value);

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

/**
** @brief Print the list.
** @param double_list
** @return void
**/
void print_double_list(double_list_t *list);

/**
** @brief free list and set the pointer to NULL
** @param list
** @return void
**/
void free_list(list_t *list);

/**
** @brief free list and set the pointer to NULL
** @param double_list
** @return void
**/
void free_double_list(double_list_t *list);

#endif
