/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** my_atof
*/

static float aft_comma(int index, char *str, float result, int after_comma_nb)
{
    if (str[index] == '.') {
        index += 1;
        while (str[index] != '\0' && str[index] >= '0' && str[index] <= '9') {
            after_comma_nb = after_comma_nb - 1;
            result = result * 10.0;
            result += str[index] - '0';
            index += 1;
        }
    }
    while (after_comma_nb < 0) {
        result = result * 0.1;
        after_comma_nb += 1;
    }
    return (result);
}

float my_atof(char *str)
{
    float result = 0.0;
    int after_comma_nb = 0;
    int index = 0;
    int is_neg = 0;

    if (str[index] == '-') {
        is_neg = 1;
        index += 1;
    }
    while (str[index] != '\0' && str[index] >= '0' && str[index] <= '9') {
        result = result * 10.0;
        result += str[index] - '0';
        index ++;
    }
    result = aft_comma(index, str, result, after_comma_nb);
    if (is_neg == 1)
        result = -result;
    return (result);
}
