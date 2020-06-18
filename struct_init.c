#include "ft_printf.h"

void    writestruct(t_struct *data)
{
    printf("\ndata:\n");
    printf("flag -> %c\n", data->flag);
    printf("width -> %d\n", data->width);
    printf("prec -> %d\n", data->prec);
    printf("spe -> %c\n\n", data->spe);
}

void    structinit(t_struct *data)
{
    data->flag = '+';
    data->width = -1;
    data->prec = 10;
    data->spe = '5';

   // writestruct(data);
}
