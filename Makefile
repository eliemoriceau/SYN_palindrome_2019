##
## EPITECH PROJECT, 2019
## tetris
## File description:
## Makefile
##

NAME		=	palindrome

SRC			=	src/utils/convert_base.c	\
				src/utils/my_char_isnum.c	\
				src/utils/my_getnbr.c		\
				src/utils/my_putchar.c		\
				src/utils/my_putnbr.c		\
				src/utils/my_putstr.c		\
				src/utils/my_str_isnum.c	\
				src/utils/my_strcmp.c	\
				src/utils/my_strcpy.c	\
				src/utils/my_strdup.c	\
				src/utils/my_strlen.c	\
				src/utils/nbr_to_str.c	\
				src/utils/printerror.c	\
				src/utils/reverse_str.c	\
				src/argument.c	\
				src/calc.c	\
				src/palindrome.c	\

test_NAME	=	unit_tests

MAIN 		=	src/main.c

test_SRC	=	$(SRC)							\
				tests/test_check_params.c\
				tests/test_convert_base.c\
				tests/test_convert_to_decimal.c\
				tests/test_palindrome.c\
				tests/test_is_palindrome.c\
				tests/test_my_putchar.c\
				tests/test_my_putnbr.c\
				tests/test_my_putstr.c\
				tests/test_my_str_isnum.c\
				tests/test_calc.c\
				tests/test_pcalc.c\

OBJ			=	$(SRC:%.c=%.o) $(MAIN:%.c=%.o)

test_OBJ	=	$(test_SRC:%.c=%.o)

INCLUDE		=	-I include

CFLAGS		=	-W -Wall -Wshadow -Wextra $(INCLUDE)

LIB_DIR		=

LIB			=

LDFLAGS		=	$(LIB)

test_LDFLAGS= 	-lcriterion -lgcov --coverage $(LIB)

CC			=	gcc

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
			$(RM) $(OBJ)
			$(RM) *.gcda
			$(RM) *.gcno
			$(RM) vgcore.*

fclean:		clean
			$(RM) $(NAME)

re:	fclean all

tests_run:		CFLAGS += -g
tests_run:		$(test_OBJ)
				$(CC) -o $(test_NAME) $(test_SRC) $(test_LDFLAGS) $(CFLAGS)
				$(RM) -f $(test_OBJ)
				./unit_tests

coverage:		CFLAGS += -g
coverage:		$(test_OBJ)
				$(CC) -o $(test_NAME) $(test_SRC) $(test_LDFLAGS) $(CFLAGS)
				$(RM) -f $(test_OBJ)
				./unit_tests
				gcovr -e tests/

branch	:		CFLAGS += -g
branch	:		$(test_OBJ)
				$(CC) -o $(test_NAME) $(test_SRC) $(test_LDFLAGS) $(CFLAGS)
				$(RM) -f $(test_OBJ)
				./unit_tests
				gcovr -e tests/ --branch

dbg		:	CFLAGS += -g
dbg		:	re

.PHONY: all clean fclean re