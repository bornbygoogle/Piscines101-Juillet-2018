#include	<stdio.h>
#include	<unistd.h>
#include	"ft_putstr.c"

char	*putstr(char *str);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		main(void)
{
	char str[] = {"-2147483649bonj25our42"};
	ft_putstr(str);
	return (0);
}