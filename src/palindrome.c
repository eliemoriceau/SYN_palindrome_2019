/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** palindrome
*/

#include "palindrome.h"
#include <stdlib.h>

info_t *create_info(void)
{
    info_t *info = malloc(sizeof(info_t));

    info->max = 100;
    info->min = 0;
    info->base = 10;
    info->n = -1;
    info->p = -1;
    return (info);
}

int is_palindrome(int nb)
{
    char *str = nbr_to_str(nb);
    int size = my_strlen(str);
    int i = 0;

    for (;i <= (size / 2); i++) {
        if (str[i] != str[size - 1 - i]) {
            free(str);
            return (0);
        }
    }
    free(str);
    return (1);
}

int palindrome(int ac, char const **av)
{
    info_t *info = create_info();

    if (check_params(info, ac, av) == 84) {
        printerror("invalid argument\n");
        free(info);
        return (84);
    } if (info->p == -1) {
        calc_n(info);
    } else if (info->n == -1) {
        calc_p(info);
    }
    free(info);
    return (0);
}