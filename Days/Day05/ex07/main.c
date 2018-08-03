#include	<stdio.h>
#include	<unistd.h>
#include	<string.h>
#include	"ft_strncmp.c"

int		ft_strncmp(char *s1,char *s2, unsigned int n);

int		main(void)
{
	char stack[] = "agdsdgsd";
	char needle[] = "agdsdg4d";
	printf("%d\n", strncmp(stack, needle, 6));
	printf("%d",ft_strncmp(stack, needle, 6));
	return (0);
}
