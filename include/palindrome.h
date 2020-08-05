/*
** EPITECH PROJECT, 2020
** SYN_palindrome_2019
** File description:
** palindrome
*/

#ifndef PALINDROME_H_
#define PALINDROME_H_

#include "structure.h"

int palindrome(int ac, char const **av);
info_t *create_info(void);

/* Calcul */
int is_palindrome(int nb);
void calc_n(info_t *info);
void calc_p(info_t *info);
int convert_to_decimal(char *nbr, int base);
int calc(int nb_start, info_t *info);
int pcalc(int nb_start, info_t *info);

/* gestion arguments */
int flag(info_t *info, int nb_flag, char const *arg);
int get_flag(info_t *info, int i, char const **av);
int check_params(info_t *info, int ac, char const **av);

/* utilis */
char *convert_base(int nb, int base);
int my_strcmp(char const *s1, char const *s2);
char *my_strdup(char const *src);
char *my_strcpy(char *dest, char const *src);
void usage(void);
char *nbr_to_str(int nbr);
int my_char_isnum(char c);
int my_str_isnum(char const *str);
int my_getnbr(char const *str);
void printerror(char const *str);
int my_strlen(char const *str);
char *reverse_str(char *str);
int my_atoi(char *str);
void my_putstr(char const *str);
void my_putchar(char c);
void my_putnbr(int nb);

#endif /* !PALINDROME_H_ */