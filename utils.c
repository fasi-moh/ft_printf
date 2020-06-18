#include "ft_printf.h"

int		ft_strclen(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c) 
		i++;
	return (i);
}

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
    int     y;

	i = ft_strlen(dest);
    y = 0;
	while (src[y])
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (dest);
}
int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strccat(char *buff, char *str, char delimiter)
{
    int idx_str;
    int idx_buff;

    idx_str = 0;
    idx_buff = 0;

    if (buff == NULL || str == NULL)
        return NULL;
    
    idx_buff += ft_strlen(buff);

    while (str[idx_str] && str[idx_str] != delimiter) {
        buff[idx_buff] = str[idx_str];       
        idx_buff++;
        idx_str++;
    }

    buff[idx_buff] = '\0';
    return buff;
}