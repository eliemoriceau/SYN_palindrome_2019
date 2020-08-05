/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** test_convert_base
*/

#include "palindrome.h"
#include <criterion/criterion.h>

Test(convert_base, base_2)
{
    char *str = convert_base(5, 2);

    cr_assert_str_eq(str, "101");
}

Test(convert_base, base_10)
{
    char *str = convert_base(5, 10);

    cr_assert_str_eq(str, "5");
}