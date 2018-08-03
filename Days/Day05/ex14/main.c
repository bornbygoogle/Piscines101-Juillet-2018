#include	<stdio.h>
#include	<unistd.h>
#include	<string.h>
#include	"ft_str_is_uppercase.c"

int	ft_str_is_uppercase(char *str);

int		main(void)
{
	char str[] = "DFSDAFEWRDSFAADAD";
	printf("%d\n", ft_str_is_uppercase(str));
	return (0);
}
