/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** reverse_str
*/

#include "palindrome.h"
#include <stdlib.h>

char *reverse_str(char *str)
{
    int k = my_strlen(str);
    char *rts = malloc(sizeof(char *) * (k + 1));
    int i = 0;

    for (int t = k - 1; t >= 0 && i <= k-1; t--, i++) {
        rts[t] = str[i];
    }
    rts[i] = '\0';

    return (rts);
}