#include	<stdio.h>
#include	<unistd.h>
#include	<string.h>
#include	"ft_strcat.c"

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char dest[] = "This is source";
	char src[] = "This is destination";
	printf("%s\n", strcat(dest, src));
	//printf("%s\n", ft_strcat(dest, src));
	return (0);
}
