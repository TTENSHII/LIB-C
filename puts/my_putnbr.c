/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** my_putnbr
*/

#include "my_puts.h"

void my_putnbr(int nb)
{
    int nbr;

    nbr = 0;
    if (nb <= 9 && nb >= 0)
        my_putchar(nb + '0');
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (- 1);
        if (nb <= 9 && nb >= 0)
            my_putnbr(nb);
    }
    if (nb > 9) {
        nbr = nb % 10;
        my_putnbr(nb / 10);
        my_putchar(nbr + '0');
    }
}
