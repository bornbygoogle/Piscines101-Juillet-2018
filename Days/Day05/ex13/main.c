#include	<stdio.h>
#include	<unistd.h>
#include	<string.h>
#include	"ft_str_is_lowercase.c"

int	ft_str_is_lowercase(char *str);

int		main(void)
{
	char str[] = "sgdfgdsgdrtdsgvbdADAD";
	printf("%d\n", ft_str_is_lowercase(str));
	return (0);
}
