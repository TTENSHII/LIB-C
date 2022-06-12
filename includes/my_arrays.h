/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** array
*/

#ifndef ARRAY_H_
    #define ARRAY_H_

/**
** @brief Create an array with a string
** @param str
** @return array of string, NULL if error
**/
char **my_str_to_word_array(char *str);

/**
** @brief count the len of an array without the NULL
** @param array
** @return len of the array, 0 if error
**/
int count_array_len(char **array);

/**
** @brief free an array
** @param array
** @return void
**/
void free_array(char **array);

/**
** @brief print an array of strings
** @param array
** @return void
**/
void print_string_array(char **array);

/**
** @brief print an array of int
** @param int_array
** @param size
** @return void
**/
void print_int_array(int *array, int size);

/**
** @brief count the len of a int array
** @param int_array
** @param int_end_value
** @return len of the array, 0 if error
**/
int count_int_array_len(int *array, int end_value);

#endif
