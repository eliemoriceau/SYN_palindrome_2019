/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** test_palindrome
*/

#include "palindrome.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

static void redirect_all_stdout(void)
{
        cr_redirect_stdout();
        cr_redirect_stderr();
}

Test(palindrome, n_4782, .init=redirect_all_stdout)
{
    int argc = 3;
    char const **argv = malloc(sizeof(char *) * 3);
    argv[0] = "./palindrome";
    argv[1] = "-n";
    argv[2] = "4782";

    palindrome(argc, argv);
    fflush(stdout);
    cr_assert_stdout_eq_str("4782 leads to 46464 in 3 iteration(s) in base 10\n");
}

Test(palindrome, n_4782_b2, .init=redirect_all_stdout)
{
    int argc = 5;
    char const **argv = malloc(sizeof(char *) * argc);
    argv[0] = "./palindrome";
    argv[1] = "-n";
    argv[2] = "64";
    argv[3] = "-b";
    argv[4] = "2";

    palindrome(argc, argv);
    fflush(stdout);
    cr_assert_stdout_eq_str("64 leads to 65 in 1 iteration(s) in base 2\n");
}

Test(palindrome, p_363_b_10, .init=redirect_all_stdout)
{
    int argc = 5;
    char const **argv = malloc(sizeof(char *) * argc);
    argv[0] = "./palindrome";
    argv[1] = "-p";
    argv[2] = "363";
    argv[3] = "-b";
    argv[4] = "10";

    palindrome(argc, argv);
    fflush(stdout);
    cr_skip();
    cr_assert_stdout_eq_str("3 leads to 363 in 6 iteration(s) in base 10\n\
6 leads to 363 in 5 iteration(s) in base 10\n\
15 leads to 363 in 3 iteration(s) in base 10\n\
21 leads to 363 in 4 iteration(s) in base 10\n\
24 leads to 363 in 3 iteration(s) in base 10\n\
12 leads to 363 in 4 iteration(s) in base 10\n\
30 leads to 363 in 4 iteration(s) in base 10\n\
33 leads to 363 in 3 iteration(s) in base 10\n\
39 leads to 363 in 2 iteration(s) in base 10\n\
42 leads to 363 in 3 iteration(s) in base 10\n\
48 leads to 363 in 2 iteration(s) in base 10\n\
51 leads to 363 in 3 iteration(s) in base 10\n\
57 leads to 363 in 2 iteration(s) in base 10\n\
60 leads to 363 in 3 iteration(s) in base 10\n\
66 leads to 363 in 2 iteration(s) in base 10\n\
75 leads to 363 in 2 iteration(s) in base 10\n\
84 leads to 363 in 2 iteration(s) in base 10\n\
93 leads to 363 in 2 iteration(s) in base 10\n\
132 leads to 363 in 1 iteration(s) in base 10\n\
231 leads to 363 in 1 iteration(s) in base 10\n\
330 leads to 363 in 1 iteration(s) in base 10\n\
363 leads to 363 in 0 iteration(s) in base 10\n");
}