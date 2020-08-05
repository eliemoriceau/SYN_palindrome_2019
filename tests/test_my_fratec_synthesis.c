/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** test_my_factrec_synthesis
*/

#include <criterion/criterion.h>

int my_factrec_synthesis(int nb);

Test(my_factrec_synthesis, 0)
{
    cr_assert_eq(my_factrec_synthesis(0), 1);
}

Test(my_factrec_synthesis, 1)
{
    cr_assert_eq(my_factrec_synthesis(1), 1);
}

Test(my_factrec_synthesis, 2)
{
    cr_assert_eq(my_factrec_synthesis(2), 2);
}

Test(my_factrec_synthesis, 3)
{
    cr_assert_eq(my_factrec_synthesis(3), 6);
}

Test(my_factrec_synthesis, 4)
{
    cr_assert_eq(my_factrec_synthesis(4), 24);
}

Test(my_factrec_synthesis, 5)
{
    cr_assert_eq(my_factrec_synthesis(5), 120);
}

Test(my_factrec_synthesis, 12)
{
    cr_assert_eq(my_factrec_synthesis(12), 479001600);
}

Test(my_factrec_synthesis, 16)
{
    cr_assert_eq(my_factrec_synthesis(16), 0);
}

Test(my_factrec_synthesis, neg)
{
    cr_assert_eq(my_factrec_synthesis(-2), 0);
}