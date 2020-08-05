/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** calc
*/

#include "palindrome.h"
#include <stdlib.h>

void display_res(info_t *info, int nb_start, char *old, int i)
{

    my_putnbr(nb_start);
    my_putstr(" leads to ");
    my_putnbr(convert_to_decimal(old, info->base));
    my_putstr(" in ");
    my_putnbr(i);
    my_putstr(" iteration(s) in base ");
    my_putnbr(info->base);
    my_putchar('\n');
}

int calc(int nb_start, info_t *info)
{
    int nbr;
    char *old = convert_base(nb_start, info->base);
    char *rev;

    for (int i = 0; i <= info->max; i++) {
        rev = reverse_str(old);
        if (my_strcmp(old, rev) == 0 && i >= info->min){
            display_res(info, nb_start, old, i);
            free(old);
            free(rev);
            return (1);
        }
        nbr = convert_to_decimal(old, info->base) + convert_to_decimal(rev, \
info->base);
        free(old);
        old = convert_base(nbr, info->base);
        free(rev);
    }
    free(old);
    return (0);
}

int pcalc(int nb_start, info_t *info)
{
    int nbr;
    char *old = convert_base(nb_start, info->base);
    char *rev;

    for (int i = 0; i <= info->max && my_strlen(old) < 10; i++) {
        rev = reverse_str(old);
        if (my_strcmp(old, rev) == 0 && i >= info->min && my_strlen(old) > 1 \
&& convert_to_decimal(old, info->base) == info->p){
            display_res(info, nb_start, old, i);
            free(old);
            free(rev);
            return (1);
        }
        nbr = convert_to_decimal(old, info->base) + convert_to_decimal(rev, \
info->base);
        free(old);
        old = convert_base(nbr, info->base);
        free(rev);
    }
    free(old);
    return (0);
}

void calc_n(info_t *info)
{
    if (!calc(info->n, info))
        my_putstr("no solution\n");
    return;
}

void calc_p(info_t *info)
{
    int solution = 0;

    for (int i = 0; i <= info->p; i++) {
        if (pcalc(i, info) == 1)
            solution = 1;
    }
    if (solution == 0)
        my_putstr("no solution\n");
}