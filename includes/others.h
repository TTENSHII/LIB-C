/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** other
*/

#ifndef OTHER_H_
    #define OTHER_H_

/**
** @brief Convert an int from base to another
** @param number
** @param from_base
** @param tp_base
** @return Pointer to the duplicated string, NULL if error
**/
int convert_number_base(int number, int from_base, int to_base);

/**
** @brief Square root math function
** @param number
** @return double | -nan if error
**/
double my_sqrt(double number);

/**
** @brief Square root math function
** @param number
** @return float number | -nan if error
**/
float sqrtf(float number);

#endif
