/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** test_is_palindrome
*/

#include <criterion/criterion.h>
#include "palindrome.h"

Test(is_palindrome, true)
{
    cr_assert_eq(is_palindrome(131), true);
}

Test(is_palindrome, false)
{
    cr_assert_eq(is_palindrome(13), false);
}