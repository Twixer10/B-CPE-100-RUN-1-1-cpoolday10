/*
** EPITECH PROJECT, 2020
** My Put Str
** File description:
** Print a String
*/

#include "my_putchar.c"

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i])
    {
        my_putchar(str[i]);
        i += 1;
    }
    return (0);
}
