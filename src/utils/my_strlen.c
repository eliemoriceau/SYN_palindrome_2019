/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int nb = 0;

    if (!str)
        return (0);
    for (int i = 0; str[i] != '\0'; i++) {
        nb++;
    }
    return (nb);
}