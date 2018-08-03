#include	<stdio.h>
#include	<unistd.h>
#include	<string.h>
#include	"ft_strlcat.c"

char	*ft_strlcat(char *dest, char *src, int nb);
int		ft_strlen(char *str);

int		main(void)
{
	char dest[] = "1879fdq\0dfaeeqWw\0wfdesfsdfsfsdfsdx\0";
	char src[] = "fasfsdfsdfasdffdsfdsafas";
	printf("%d\n", ft_strlen(dest));
	printf("%d\n", ft_strlen(src));
	printf("%lu\n", strlcat(dest, src, 10));
	//printf("%s\n", ft_strlcat(dest, src, 10));
	return (0);
}
