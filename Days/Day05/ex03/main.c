#include	<stdio.h>
#include	<unistd.h>
#include	<string.h>
#include	"ft_strcpy.c"

char	*ft_strcpy(char *dest, char *src);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		main(void)
{
	char dest[] = "\0";
	char src[]	= "fda9898f\0s4537";

	stpcpy(dest, src);
	printf("%s\n",strcpy(dest, src));
	//printf("%s",ft_strcpy(dest, src));
	return (0);
}