/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** my_strstr
*/

#include "my_strings.h"
#include <stddef.h>

char *my_strstr(const char *haystack, const char *needle)
{
    if (haystack == NULL || needle == NULL)
        return (NULL);
    
    for (int i = 0; haystack[i] != '\0'; i++) {
        if (my_strncmp(&haystack[i], needle, my_strlen(needle)) == 0) {
            return ((char *)&haystack[i]);
        }
    }
    return (NULL);
}
