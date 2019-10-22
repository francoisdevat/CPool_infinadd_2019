/*
** EPITECH PROJECT, 2019
** lol
** File description:
** lolilol
*/


int my_str_isnum(char *str)
{
    int i;

    i = 0;
    if (str[i] = '-')
        i++;
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            i = i + 1;
        }
        else
        {
            return (0);
        }
    }
    return (1);
}
