#include "ft_printf.h"

void recupvalue(char *str, t_struct *data)
{
    int cursor;

    cursor = 0;
    while (str[cursor])
    {
        if (str[cursor] == '-' || str[cursor] == '0')
            data->flag = str[cursor];
        else if (str[cursor] >= 0 && str[cursor] <= 9)
            data->width = str[cursor] - 48;
        else if (str[cursor] == '.')
        {
            cursor++;
            data->prec = str[cursor] - 48;
        }
        else if (str[cursor] == 'c' || str[cursor] == 's' || str[cursor] == 'p' || str[cursor] == 'd' || str[cursor] == 'i' || str[cursor] == 'u' || str[cursor] == 'x' || str[cursor] == 'X' || str[cursor] == '%')
        {
            data->spe = str[cursor];
        }
            cursor++;
    }
}