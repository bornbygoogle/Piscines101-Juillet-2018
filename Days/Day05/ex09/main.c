#include	<stdio.h>
#include	<unistd.h>
#include	<string.h>
#include	"ft_strlowcase.c"

char	* ft_strlowcase(char *str);

int		main(void)
{
	char str[] = "agSDFdg4dQSAZCCeZSrw";
	printf("%s\n", ft_strlowcase(str));
	return (0);
}
