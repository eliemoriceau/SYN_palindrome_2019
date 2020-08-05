/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** printerror
*/

#include <unistd.h>

void my_putcharerror(char c)
{
    write(2, &c, 1);
}

void printerror(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putcharerror(str[i]);
    }
}