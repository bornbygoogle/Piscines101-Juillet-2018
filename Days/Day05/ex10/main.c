#include	<stdio.h>
#include	<unistd.h>
#include	<string.h>
#include	"ft_strcapitalize.c"

char	* ft_strcapitalize(char *str);

int		main(void)
{
	//char str2[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str[] = "Salut, CoMm42efsdf$34##$#$nt tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
