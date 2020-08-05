/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** test_pcalc
*/

#include "palindrome.h"
#include <criterion/criterion.h>

Test(pcalc, true)
{
    info_t *info = create_info();

    info->p = 363;
    cr_assert_eq(pcalc(363, info), 1);
}

Test(pcalc, false)
{
    info_t *info = create_info();

    info->p = 363;
    info->min = 7;
    cr_assert_eq(pcalc(363, info), 0);
}