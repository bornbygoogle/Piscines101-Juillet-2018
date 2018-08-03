#include	<stdio.h>
#include	<unistd.h>
#include	<string.h>
#include	"ft_strstr.c"

char	*ft_strstr(char *str,char *to_find);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		main(void)
{
	char stack[] = "Bnjour MR la Je suis la";
	char needle[] = "is";
	printf("%s",ft_strstr(stack, needle));
	return (0);
}
