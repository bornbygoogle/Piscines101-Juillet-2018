#include	<stdio.h>
#include	<unistd.h>
#include	<string.h>
#include	"ft_str_is_alpha.c"

int	ft_str_is_alpha(char *str);

int		main(void)
{
	char str[] = "salut0commenttuvas012542mots4quarante4deux4cinquanteetun";
	printf("%d\n", ft_str_is_alpha(str));
	return (0);
}
