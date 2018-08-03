#include	<stdio.h>
#include	<unistd.h>
#include	<string.h>
#include	"ft_strupcase.c"

char	* ft_strupcase(char *str);

int		main(void)
{
	char str[] = "agdsfdg4dwASDrwerw";
	printf("%s\n", ft_strupcase(str));
	return (0);
}
