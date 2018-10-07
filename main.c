/*
** EPITECH PROJECT, 2018
** main .c
** File description:
** main.c
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac, char **av)
{
    char *dest = malloc(sizeof(char) * strlen(av[1]) + 1);
    int n = 4;

    printf("cpy = %s\n", my_strcpy(dest, av[1]));
    free(dest);
    dest = malloc(sizeof(char) * n + 1);
    printf("ncpy = %s\n", my_strncpy(dest, av[1], 4));
    free(dest);
    printf("revstr = %s\n", my_revstr(av[1]));
    printf("strstr = %s\n", my_strstr(av[1], av[2]));
    printf("strcmp = %d\n", my_strcmp(av[1], av[2]));
    printf("strncmp = %d\n", my_strncmp(av[1], av[2], n));
    printf("strcpitalize = %s\n", my_strcapitalize(av[1]));
    printf("strlowcase = %s\n", my_strlowcase(av[1]));
    printf("strupcase = %s\n", my_strupcase(av[1]));
    printf("isalpha = %d\n", my_str_isalpha(av[1]));
    printf("islower = %d\n", my_str_islower(av[1]));
    printf("isupper = %d\n", my_str_isupper(av[1]));
    printf("isprint = %d\n", my_str_isprintable(av[1]));
}
