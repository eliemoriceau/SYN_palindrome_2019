/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** convert_base
*/

#include "palindrome.h"
#include <stdlib.h>

int convert_to_decimal(char *nb, int base)
{
    int len = my_strlen(nb) - 1;
    int res = 0;

    if (base == 10)
        return (my_getnbr(nb));
    for (int tmp = 1; len >= 0; len--) {
        res += (nb[len] - 48) * tmp;
        tmp *= base;
    }
    return (res);
}

char *convert_base(int nb, int base)
{
    int count;
    char *str = malloc(sizeof(char) * 100);
    char num[11] = "0123456789";
    char *res;

    for (count = 0; nb != 0; count++) {
        str[count] = num[nb % base];
        nb = nb / base;
    }
    str[count] = '\0';
    res = reverse_str(str);
    free(str);
    return (res);
}
