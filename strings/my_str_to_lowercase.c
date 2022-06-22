/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** my_to_lower_case
*/

char *my_str_to_lowercase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    return (str);
}
