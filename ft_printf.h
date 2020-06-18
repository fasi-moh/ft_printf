#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

typedef struct s_struct
{
	char		flag;
	int			width;
	int			prec;
	char		spe;
}				t_struct;

void    structinit(struct s_struct *data);
void    writestruct(struct s_struct *data);
void    recupvalue(char *str, struct s_struct *data);
int     ft_strlen(char *str);
int		managebuff(char *str, int cursor);// int start, int end);
int		ft_printf(char *format, ...);
char	*ft_strcat(char *dest, const char *src);
int		ft_strclen(char *str, char c);
char 	*ft_strccat(char *buff, char *str, char delimiter);

#endif