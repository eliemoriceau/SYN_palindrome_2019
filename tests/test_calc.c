/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** test_calc
*/

#include "palindrome.h"
#include <criterion/criterion.h>

Test(calc, true)
{
    info_t *info = create_info();

    info->n = 363;

    cr_assert_eq(calc(363, info), 1);
}