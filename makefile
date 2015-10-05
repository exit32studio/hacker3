#
# Makefile
#
# CS50
# Problem Set 3


generate:  generate.c
    clang -ggdb3 -o0 -std=cll -Wall -Werror -o generate generate.c -lcs50 -lm -lstdlib
