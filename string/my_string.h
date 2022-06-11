/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** my_string
*/

#ifndef MY_STRING_H_
    #define MY_STRING_H_
    #include <stddef.h>

/**
** @brief Concatenate two strings and write the \0 at the end
** @param dest
** @param src
** @return Pointer to dest, NULL if error
**/
char *my_strcat(char *dest, char const *src);

/**
** @brief Concatenate the n first characters of src into dest
** @param dest
** @param src
** @return Pointer to dest, NULL if error
**/
char *my_strncat(char *dest, char const *src, size_t n);

/**
** @brief Copy the string src into dest
** @param dest
** @param src
** @return Pointer to dest, NULL if error
**/
char *my_strcpy(char *dest, char const *src);

/**
** @brief Copy the n first characters of src into dest
** @param dest
** @param src
** @return Pointer to dest, NULL if error
**/
char *my_strncpy(char *dest, char const *src, size_t n);

/**
** @brief Calculate the length of a string excluding the \0
** @param src
** @return Number of characters in src
**/
char *my_strlen(char const *src);

/**
** @brief Compare two strings
** @param s1
** @param s2
** @return 0 if s1 == s2, else the difference between s1 and s2
**/
char *my_strcmp(char const *s1, char const *s2);

/**
** @brief Compare two strings
** @param s1
** @param s2
** @param n
** @return 0 if s1 == s2, else the difference between s1 and s2
**/
char *my_strncmp(char const *s1, char const *s2, size_t n);

/**
** @brief Duplicate a string
** @param s1
** @return Pointer to the duplicated string, NULL if error
**/
char *my_strdup(char const *s1, char const *s2);

/**
** @brief Duplicate the n first characters of a string
** @param s1
** @param n
** @return Pointer to the duplicated string, NULL if error
**/
char *my_strndup(char const *s1, char const *s2, size_t n);

#endif
