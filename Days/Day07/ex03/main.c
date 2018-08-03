#include <unistd.h>
#include "ft_concat_params.c"

void	ft_putchar(char c)
{
	write( 1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int index;

	index = 1;
	if (argc < 1)
		ft_putstr("ft_print_params usage : ./a.out test1 test2 test3");
	else
	{
		ft_putstr(ft_concat_params(argc, argv));
	}
	return (0);
}
