/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** nbr_to_str
*/

#include <stdlib.h>

char *nbr_to_str(int nbr)
{
    char *str = NULL;
    int tmp = nbr;
    int len = 0;

    for (len = 0; tmp > 0; len++) {
        tmp = tmp / 10;
    }
    str = malloc(sizeof(char) * (len + 1));
    str[len] = '\0';
    len--;
    while (len >= 0) {
        str[len] = nbr % 10 + '0';
        nbr = nbr / 10;
        len--;
    }
    return (str);
}