#include	<stdio.h>
#include	<unistd.h>
#include	<string.h>
#include	"ft_strncat.c"

char	*ft_strncat(char *dest, char *src, int nb);

int		main(void)
{
	char dest[] = "1879fdqwdfaeeqW\0wrwfdesfsdfsfsdfsdx\0";
	char src[] = "fasfsdfsdfasdfdsfaE";
	printf("%s\n", strncat(dest, src, 30));
	printf("%s\n", ft_strncat(dest, src, 30));
	return (0);
}
