/*
** EPITECH PROJECT, 2020
** DO OP
** File description:
** NO DESCRIPTION FOUND
*/

#include "../include/my.h"

int do_op(char *ac, char op, char *bc)
{
    int a = my_getnbr(ac);
    int b = my_getnbr(bc);

    if (op != '+' && op != '-' &&
        op != '*' && op != '/' &&
        op != '%') {
        my_putchar('0');
        return (84);
    }
    if (op == '+')
        return (do_add(a, b));
    if (op == '-')
        return (do_sub(a, b));
    if (op == '*')
        return (do_mul(a, b));
    if (op == '/')
        return (do_div(a, b));
    if (op == '%')
        return (do_mod(a, b));
    return (84);
}

int main(int argc, char **argv)
{
    if (argc > 3)
        return (do_op(argv[1], argv[2][0], argv[3]));
}
