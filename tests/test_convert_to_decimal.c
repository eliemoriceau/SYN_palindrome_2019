/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** test_convert_to_decimal
*/

#include "palindrome.h"
#include <criterion/criterion.h>

Test(convert_to_decimal, base_2)
{
    cr_assert_eq(convert_to_decimal("101011001", 2), 345);
}

Test(convert_to_decimal, base_3)
{
    cr_assert_eq(convert_to_decimal("110210", 3), 345);
}

Test(convert_to_decimal, base_4)
{
    cr_assert_eq(convert_to_decimal("11121", 4), 345);
}

Test(convert_to_decimal, base_5)
{
    cr_assert_eq(convert_to_decimal("2340", 5), 345);
}

Test(convert_to_decimal, base_6)
{
    cr_assert_eq(convert_to_decimal("1333", 6), 345);
}

Test(convert_to_decimal, base_7)
{
    cr_assert_eq(convert_to_decimal("1002", 7), 345);
}

Test(convert_to_decimal, base_8)
{
    cr_assert_eq(convert_to_decimal("531", 8), 345);
}

Test(convert_to_decimal, base_9)
{
    cr_assert_eq(convert_to_decimal("423", 9), 345);
}

Test(convert_to_decimal, base_10)
{
    cr_assert_eq(convert_to_decimal("345", 10), 345);
}
