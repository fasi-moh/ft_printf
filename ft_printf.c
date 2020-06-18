#include "ft_printf.h"
#include <string.h>

// manage buff ne doit pas écrire (func write_buff ??) 
// une fonction doit toujours faire une seule chose et pas plus
int managebuff(char *str, int cursor)//, int lenSize, int buffSize)
{
	char buff[3096];
	int buffSize;
	int lenSize;
	(void)cursor;
   
	bzero(buff, 3096);
	buffSize = ft_strlen(buff);
	lenSize = ft_strlen(str);

	if (lenSize > 3096)
	{
		return (write(1, str, lenSize));
	}
	else if (buffSize + lenSize < 3096)
	{
		ft_strccat(buff, str, '%');
	}

	printf("buff: %s\n", buff);
	return (buffSize);
}

int ft_printf(char *format, ...)
{
	va_list list;
	int cursor;
	int ret;
	t_struct data;

	va_start(list, format);
	ret = 0;
	cursor = 0;
	structinit(&data);
	while(format[cursor])
	{
		recupvalue(format, &data);
		if (format[cursor] == '%')
		{
			ret += managebuff(format, cursor);
			cursor += ret;
			printf("%d\n", cursor);
		}
		cursor++;
	}
	writestruct(&data);
	return (ret);
}
