#include	<stdio.h>
#include	<unistd.h>
#include	<string.h>
#include	"ft_strcmp.c"

int		ft_strcmp(char *s1,char *s2);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		main(void)
{
	char stack[] = "afsad";
	char needle[] = "aBfdsfsab45156";
	printf("%d\n", strcmp(stack, needle));
	printf("%d",ft_strcmp(stack, needle));
	return (0);
}
