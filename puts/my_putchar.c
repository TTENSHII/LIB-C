/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** my_putchar
*/

#include <unistd.h>

void my_putchar(char c)
{
    write (1 , &c , 1);
}
