#include	<stdio.h>
#include	<unistd.h>
#include	<string.h>
#include	"ft_str_is_printable.c"

int	ft_str_is_printable(char *str);

int		main(void)
{
	char str[] = "'\"DFSDAFEWRDSFAADAD314fgsdggfs24\f3244!arwerdfafsadf#@#54a as ";
	printf("%d\n", ft_str_is_printable(str));
	return (0);
}
