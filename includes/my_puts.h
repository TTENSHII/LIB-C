/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** my_puts
*/

#ifndef MY_PUTS_H_
    #define MY_PUTS_H_

/**
** @brief Write a string to the standard output
** @param src
** @return void
**/
void my_putchar(char c);

/**
** @brief Write a string to the standard output
** @param src
** @return number of characters written
**/
int my_putstr(char const *str);

/**
** @brief Write a string to the error output
** @param src
** @return number of characters written
**/
int my_puterror(char const *str);

/**
** @brief Write a number to the standard output
** @param nb
** @return void
**/
void my_putnbr(int nb);

/**
** @brief Write a number in the given base
** @param number
** @param base
** @return 0 if success, 1 if error
**/
int my_putnbr_base(int number, char const *base);

/**
** @brief Write a string with a line break at the end
** @param str
** @return number of characters written | 0 if error
**/
int my_puts(char const *str);

#endif
