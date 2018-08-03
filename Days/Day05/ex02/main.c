#include	<stdio.h>
#include	<unistd.h>
#include	"ft_atoi.c"

int		ft_atoi(const char *str);

int		main(void)
{
	/* Test			ft_atoi			*/
	char str[] = {"-2147483649bonj25our42"};
	printf("%d",ft_atoi(str));

	return (0);
}