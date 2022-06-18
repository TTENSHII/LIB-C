/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** my_string
*/

#ifndef MY_STRINGS_H_
    #define MY_STRINGS_H_
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
int my_strlen(char const *src);

/**
** @brief Compare two strings
** @param s1
** @param s2
** @return 0 if s1 == s2, else the difference between s1 and s2
**/
int my_strcmp(char const *s1, char const *s2);

/**
** @brief Compare two strings
** @param s1
** @param s2
** @param n
** @return 0 if s1 == s2, else the difference between s1 and s2
**/
int my_strncmp(char const *s1, char const *s2, size_t n);

/**
** @brief Compare n characters of two strings ignoring case
** @param s1
** @param s2
** @return 0 if s1 == s2, else the difference between s1 and s2
**/
int my_strcasecmp(char const *s1, char const *s2);

/**
** @brief Compare n characters of two strings ignoring case
** @param s1
** @param s2
** @param n
** @return 0 if s1 == s2, else the difference between s1 and s2
**/
int my_strncasecmp(char const *s1, char const *s2, size_t n);

/**
** @brief Duplicate a string
** @param s1
** @return Pointer to the duplicated string, NULL if error
**/
char *my_strdup(char const *s1);

/**
** @brief Duplicate the n first characters of a string
** @param s1
** @param n
** @return Pointer to the duplicated string, NULL if error
**/
char *my_strndup(char const *s1, size_t n);

/**
** @brief Locate a substring in a string
** @param haystack
** @param needle
** @return Pointer to the first begining of the located substring, NULL if not found
**/
char *my_strstr(char const *haystack, char const *needle);

/**
** @brief Locate a substring in a string
** @param haystack
** @param needle
** @return Pointer to the first begining of the located substring, NULL if not found
**/
char *my_strcasestr(char const *haystack, char const *needle);

/**
** @brief Reverse a string
** @param str
** @return Pointer to the reversed str, NULL if error
**/
char *my_strrev(char *str);

/**
** @brief Convert an integer to a string
** @param nb
** @return Pointer to the new str, NULL if error
**/
char *my_itoa(int nb);

/**
** @brief Convert a string to an integer | Stop at the first nondigit character
** @param str
** @return The string converted to an integer, 0 if error
**/
int my_atoi(char *str);

/**
** @brief Convert a string to an integer | Stop at the first nondigit character
** @param str
** @return The string converted to a float, 0 if error
**/
float my_atof(char *str);

/**
** @brief Concatenate all strings
** @param bool space separator
** @param first first string
** @param ...
** @param NULL to end the list
** @return Pointer to the new string, NULL if error
**/
char *my_strings_concatenator(bool space, char *str, ...);

#endif
