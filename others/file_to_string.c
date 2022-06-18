/*
** EPITECH PROJECT, 2022
** LIB-C
** File description:
** file_to_string
*/

#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

char *file_to_string(char *path)
{
    int size = 0;
    char *buffer = NULL;
    struct stat statsize;
    int filedescriptor = 0;

    filedescriptor = open(path, O_RDONLY);
    if (filedescriptor == -1)
        return (NULL);
    stat(path, &statsize);
    size = statsize.st_size;
    buffer = malloc(sizeof(char) * size + 1);
    read(filedescriptor, buffer, size);
    buffer[size] = '\0';
    close(filedescriptor);
    return (buffer);
}
