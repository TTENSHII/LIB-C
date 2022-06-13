/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** my_putnbr_base
*/

#include "my_puts.h"
#include "my_strings.h"

int my_putnbr_base(int number, char const *base)
{
    int temp = 0;
    int base_len = my_strlen(base);
    if (base_len < 2)
        return (1);

    if (number < 0) {
        my_putchar('-');
        number = number * -1;
    }
    temp = number % base_len;
    number = number / base_len;
    if (number > 0)
        my_putnbr_base(number, base);
    my_putchar(base[temp]);
    return (0);
}
