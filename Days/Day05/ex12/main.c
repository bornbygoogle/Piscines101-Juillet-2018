#include	<stdio.h>
#include	<unistd.h>
#include	<string.h>
#include	"ft_str_is_numeric.c"

int	ft_str_is_numeric(char *str);

int		main(void)
{
	char str[] = "";
	printf("%d\n", ft_str_is_numeric(str));
	return (0);
}
