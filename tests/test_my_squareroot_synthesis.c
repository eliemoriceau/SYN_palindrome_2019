/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** test_my_squareroot_synthesis
*/

#include <criterion/criterion.h>

int my_squareroot_synthesis (int nb );

Test(my_squareroot_synthesis, neg)
{
    cr_assert_eq(my_squareroot_synthesis(-1), -1);
}

Test(my_squareroot_synthesis, 0)
{
    cr_assert_eq(my_squareroot_synthesis(0), 0);
}

Test(my_squareroot_synthesis, 1)
{
    cr_assert_eq(my_squareroot_synthesis(1), 1);
}

Test(my_squareroot_synthesis, 62500)
{
    cr_assert_eq(my_squareroot_synthesis(62500), 250);
}

Test(my_squareroot_synthesis, 5)
{
    cr_assert_eq(my_squareroot_synthesis(5), -1);
}

Test(my_squareroot_synthesis, 2147395600)
{
    cr_assert_eq(my_squareroot_synthesis(2147395600), 46340);
}

Test(my_squareroot_synthesis, 15)
{
    cr_assert_eq(my_squareroot_synthesis(15), -1);
}