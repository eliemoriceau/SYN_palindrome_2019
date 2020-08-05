/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** test_check_params
*/

#include "palindrome.h"
#include <string.h>
#include <criterion/criterion.h>

Test(check_params, ac_paire)
{
    info_t *info = create_info();
    int argc = 2;
    char const **argv = malloc(sizeof(char *) * argc);
    argv[0] = "./palindrome";
    argv[1] = "-n";
    int res = -1;

    res = check_params(info, argc, argv);
    cr_assert_eq(res, 84);
}

Test(check_params, ac_un)
{
    info_t *info = create_info();
    int argc = 1;
    char const **argv = malloc(sizeof(char *) * argc);
    argv[0] = "./palindrome";
    int res = -1;

    res = check_params(info, argc, argv);
    cr_assert_eq(res, 84);
}

Test(check_params, no_nbr)
{
    info_t *info = create_info();
    int argc = 3;
    char const **argv = malloc(sizeof(char *) * 3);
    argv[0] = "./palindrome";
    argv[1] = "-n";
    argv[2] = "azr";
    int res = -1;

    res = check_params(info, argc, argv);
    cr_assert_eq(res, 84);
}

Test(check_params, flag_n)
{
    info_t *info = create_info();
    int argc = 3;
    char const **argv = malloc(sizeof(char *) * 3);
    argv[0] = "./palindrome";
    argv[1] = "-n";
    argv[2] = "363";
    int res = -1;

    res = check_params(info, argc, argv);
    cr_assert_eq(res, 0);
    cr_assert_eq(info->n, 363);
}

Test(check_params, flag_n_neg)
{
    info_t *info = create_info();
    int argc = 3;
    char const **argv = malloc(sizeof(char *) * 3);
    argv[0] = "./palindrome";
    argv[1] = "-n";
    argv[2] = "-363";
    int res = -1;

    res = check_params(info, argc, argv);
    cr_assert_eq(res, 84, "res: %i", res);
}

Test(check_params, flag_p_true)
{
    info_t *info = create_info();
    int argc = 3;
    char const **argv = malloc(sizeof(char *) * 3);
    argv[0] = "./palindrome";
    argv[1] = "-p";
    argv[2] = "363";
    int res = -1;

    res = check_params(info, argc, argv);
    cr_assert_eq(res, 0);
}

Test(check_params, no_p_nbr)
{
    info_t *info = create_info();
    int argc = 3;
    char const **argv = malloc(sizeof(char *) * 3);
    argv[0] = "./palindrome";
    argv[1] = "-p";
    argv[2] = "azr";
    int res = -1;

    res = check_params(info, argc, argv);
    cr_assert_eq(res, 84);
}

Test(check_params, flag_p_neg)
{
    info_t *info = create_info();
    int argc = 3;
    char const **argv = malloc(sizeof(char *) * 3);
    argv[0] = "./palindrome";
    argv[1] = "-p";
    argv[2] = "-363";
    int res = -1;

    res = check_params(info, argc, argv);
    cr_assert_eq(res, 84);
}

Test(check_params, flag_p_no_palin)
{
    info_t *info = create_info();
    int argc = 3;
    char const **argv = malloc(sizeof(char *) * 3);
    argv[0] = "./palindrome";
    argv[1] = "-p";
    argv[2] = "63";
    int res = -1;

    res = check_params(info, argc, argv);
    cr_assert_eq(res, 84);
}

Test(check_params, flag_p_no_palin_b_2)
{
    info_t *info = create_info();
    int argc = 5;
    char const **argv = malloc(sizeof(char *) * argc);
    argv[0] = "./palindrome";
    argv[1] = "-p";
    argv[2] = "64";
    argv[3] = "-b";
    argv[4] = "2";

    int res = -1;

    res = check_params(info, argc, argv);
    cr_assert_eq(res, 84);
}

Test(check_params, flag_p_imin)
{
    info_t *info = create_info();
    int argc = 5;
    char const **argv = malloc(sizeof(char *) * argc);
    argv[0] = "./palindrome";
    argv[1] = "-p";
    argv[2] = "363";
    argv[3] = "-imin";
    argv[4] = "4";
    int res = -1;

    res = check_params(info, argc, argv);
    cr_assert_eq(res, 0);
    cr_assert_eq(info->min, 4);
}

Test(check_params, flag_p_imin_neg)
{
            info_t *info = create_info();
    int argc = 5;
    char const **argv = malloc(sizeof(char *) * argc);
    argv[0] = "./palindrome";
    argv[1] = "-p";
    argv[2] = "363";
    argv[3] = "-imin";
    argv[4] = "-4";
    int res = -1;

    res = check_params(info, argc, argv);
    cr_assert_eq(res, 84);
}

Test(check_params, no_p_no_n)
{
            info_t *info = create_info();
    int argc = 3;
    char const **argv = malloc(sizeof(char *) * argc);
    argv[0] = "./palindrome";
    argv[1] = "-imin";
    argv[2] = "4";
    int res = -1;

    res = check_params(info, argc, argv);
    cr_assert_eq(res, 84);
}

Test(check_params, flag_p_and_n)
{
            info_t *info = create_info();
    int argc = 5;
    char const **argv = malloc(sizeof(char *) * argc);
    argv[0] = "./palindrome";
    argv[1] = "-p";
    argv[2] = "363";
    argv[3] = "-n";
    argv[4] = "4";
    int res = -1;

    res = check_params(info, argc, argv);
    cr_assert_eq(res, 84);
}

Test(check_params, flag_b_true)
{
    info_t *info = create_info();
    int argc = 5;
    char const **argv = malloc(sizeof(char *) * argc);
    argv[0] = "./palindrome";
    argv[1] = "-n";
    argv[2] = "363";
    argv[3] = "-b";
    argv[4] = "4";
    int res = -1;

    res = check_params(info, argc, argv);
    cr_assert_eq(res, 0);
}

Test(check_params, flag_b_false_inf)
{
    info_t *info = create_info();
    int argc = 5;
    char const **argv = malloc(sizeof(char *) * argc);
    argv[0] = "./palindrome";
    argv[1] = "-p";
    argv[2] = "363";
    argv[3] = "-b";
    argv[4] = "-4";
    int res = -1;

    res = check_params(info, argc, argv);
    cr_assert_eq(res, 84);
}

Test(check_params, flag_b_false_sup)
{
    info_t *info = create_info();
    int argc = 5;
    char const **argv = malloc(sizeof(char *) * argc);
    argv[0] = "./palindrome";
    argv[1] = "-p";
    argv[2] = "363";
    argv[3] = "-b";
    argv[4] = "15";
    int res = -1;

    res = check_params(info, argc, argv);
    cr_assert_eq(res, 84);
}

Test(check_params, flag_imin_false_inf)
{
    info_t *info = create_info();
    int argc = 5;
    char const **argv = malloc(sizeof(char *) * argc);
    argv[0] = "./palindrome";
    argv[1] = "-p";
    argv[2] = "363";
    argv[3] = "-imin";
    argv[4] = "-4";
    int res = -1;

    res = check_params(info, argc, argv);
    cr_assert_eq(res, 84);
}

Test(check_params, flag_imax_false_inf)
{
    info_t *info = create_info();
    int argc = 5;
    char const **argv = malloc(sizeof(char *) * argc);
    argv[0] = "./palindrome";
    argv[1] = "-p";
    argv[2] = "363";
    argv[3] = "-imax";
    argv[4] = "-15";
    int res = -1;

    res = check_params(info, argc, argv);
    cr_assert_eq(res, 84);
}

Test(check_params, flag_imax_no_nb)
{
    info_t *info = create_info();
    int argc = 5;
    char const **argv = malloc(sizeof(char *) * argc);
    argv[0] = "./palindrome";
    argv[1] = "-p";
    argv[2] = "363";
    argv[3] = "-imax";
    argv[4] = "ade";
    int res = -1;

    res = check_params(info, argc, argv);
    cr_assert_eq(res, 84);
}

Test(check_params, flag_imax_inf_imin)
{
    info_t *info = create_info();
    int argc = 7;
    char const **argv = malloc(sizeof(char *) * argc);
    argv[0] = "./palindrome";
    argv[1] = "-p";
    argv[2] = "363";
    argv[3] = "-imax";
    argv[4] = "5";
    argv[5] = "-imin";
    argv[6] = "8";
    int res = -1;

    res = check_params(info, argc, argv);
    cr_assert_eq(res, 84);
}