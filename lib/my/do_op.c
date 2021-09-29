/*
** EPITECH PROJECT, 2020
** DO OPPERATION
** File description:
** NO DESCRIPTION FOUND
*/

#include "my_putstr.c"
#include "my_put_nbr.c"

int do_add(int a, int b)
{
    my_put_nbr(a + b);
    return (0);
}

int do_sub(int a, int b)
{
    my_put_nbr(a - b);
    return (0);
}

int do_div(int a, int b)
{
    if (b == 0) {
        my_putstr("Stop: division by zero");
        return (84);
    }
    else {
        my_put_nbr(a / b);
        return (0);
    }
}

int do_mod(int a, int b)
{
    if (b == 0) {
        my_putstr("Stop: modulo by zero");
        return (84);
    }
    else {
        my_put_nbr(a % b);
        return (0);
    }
}

int do_mul(int a, int b)
{
    my_put_nbr(a * b);
    return (0);
}
