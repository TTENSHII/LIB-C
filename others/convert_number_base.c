/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** convert_number_base
*/

int power(int nb, int power)
{
    int i = 0;
    int result = 1;

    for (i = 0; i < power; i++)
        result *= nb;
    return (result);
}

int convert_number_base(int number, int from_base, int to_base)
{
    int i = 0;
    int result = 0;
    int remainder = 0;

    while (number > 0) {
        remainder = number % to_base;
        result += remainder * power(from_base, i);
        number /= to_base;
        i++;
    }
    return (result);
}
