/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** requirement
*/

int my_factrec_synthesis(int nb)
{
    int frac = 1;

    if (nb < 0 || nb > 12)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    for (int i = nb; i > 0; i--) {
        frac *= i;
    }
    return (frac);
}

int my_squareroot_synthesis(int nb)
{
    if (nb < 0)
        return (-1);
    for (int root = 0; root <= 46340 && root <= nb; root++)
        if (root * root == nb)
            return (root);
    return (-1);
}