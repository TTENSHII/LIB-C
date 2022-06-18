/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** my_sqrt
*/

#include <math.h>

double my_sqrt(double number)
{
    double result = number;
    double compare_result = 0.0 ;

    if (number < 0)
        return (-NAN);

    while (result != compare_result) { 
        compare_result = result ;
        result = (result + number / result);
        result = result / 2.00;
    }
    return (result);
}
