/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** argument
*/

#include "palindrome.h"
#include <stdlib.h>

int flag(info_t *info, int nb_flag, char const *arg)
{
    switch (nb_flag) {
    case 0:
        info->n = my_getnbr(arg);
        return (0);
    case 1:
        info->p = my_getnbr(arg);
        return (0);
    case 2:
        info->base = my_getnbr(arg);
        return (0);
    case 3:
        info->min = my_getnbr(arg);
        return (0);
    case 4:
        info->max = my_getnbr(arg);
        return (0);
    default:
        return (84);
    }
}

int get_flag(info_t *info, int i, char const **av)
{
    char arr_flag[5][6] = {"-n\0", "-p\0", "-b\0", "-imin\0", "-imax\0"};
    int res = 0;

    for (int j = 0; j < 5; j++) {
        if (my_strcmp(av[i], arr_flag[j]) == 0 && res == 0)
            res = flag(info, j, av[i + 1]);
    }
    return (res);
}

int check_params(info_t *info, int ac, char const **av)
{
    char *str;

    if ((ac % 2) == 0 || ac == 1)
        return (84);
    for (int i = 1; i < ac; i += 2)
        if (get_flag(info, i, av) == 84 || !my_str_isnum(av[i + 1]))
            return (84);
    if (info->p != -1)
        str = convert_base(info->p, info->base);
    if ((info->n == -1 && info->p == -1) ||(info->n != -1 && info->p != -1) || \
info->n < -1 || info->p < -1 || info->base < 2 || info->base > 10 || \
info->min < 0 || info->max < 0 || info->max < info->min || (info->p != -1 && \
!is_palindrome(my_getnbr(str)))) {
        if (info->p != -1)
            free(str);
        return (84);
    }
    if (info->p != -1)
        free(str);
    return (0);
}