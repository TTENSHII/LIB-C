/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** my_strncmp
*/

int my_strncmp(const char *s1, char const *s2, int n)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && i < n) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i += 1;
    }
    return (s1[i - 1] - s2[i - 1]);
}
