#include	<stdio.h>
#include	<unistd.h>
#include	<string.h>
#include	"ft_strncpy.c"

char	*ft_strncpy(char *dest, char *src, unsigned int n);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		main(void)
{
	char dest[] = "\0";
	char src[]	= "123d5";
	//printf("%s\n",strncpy(dest, src, 9));
	printf("%s",ft_strncpy(dest, src, 9));
	return (0);
}