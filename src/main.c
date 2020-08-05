/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** main
*/

#include "palindrome.h"

int main(int ac, char const **av)
{
    if (ac == 1)
        return (84);
    return (palindrome(ac, av));
}