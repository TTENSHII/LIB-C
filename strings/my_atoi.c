/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** my_atoi
*/

int my_atoi(char *str)
{
    int nb = 0, index = 0, is_neg = 0;

    if (str[index] == '-') {
        index += 1;
        is_neg = 1;
    }
    while (str[index] != '\0') {
        if (str[index] >= '0' && str[index] <= '9') {
            nb = (nb * 10) + (str[index] - 48);
        } else {
            return (nb);
        }
        index ++;
    }
    if (is_neg == 1)
        nb *= -1;
    return (nb);
}
