/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** my_str_to_uppercase
*/

char *my_str_to_uppercase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    return (str);
}
