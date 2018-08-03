#include <unistd.h>
#include "ft_strdup.c"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int main(void)
{
	char *str;

	str = "hellloziweurdkslfjas";
	ft_putstr(str);
	ft_putstr("\n | \n");
	ft_putstr(ft_strdup(str));
	return (0);
}