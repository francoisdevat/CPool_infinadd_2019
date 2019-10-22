/*
** EPITECH PROJECT, 2019
** inifnit add
** File description:
** project for bistro
*/

#include <stdlib.h>
#include <my.h>

int main(int argc, char **argv)
{
    int i;
    int j;
        
    i = my_str_isnum(argv[1]);
    j = my_str_isnum(argv[2]);
    if (argc =! 3 || i == 0 || j== 0)
        my_putstr("invalide input");
    return(0);
}
