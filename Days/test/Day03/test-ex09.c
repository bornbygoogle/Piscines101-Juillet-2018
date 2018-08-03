#include <stdio.h>

void	ft_putstr(char *str);
void	*ft_strrev(char *str);

int	main(void)
{
    char *str;
	//char *str2;

	str = "StringAAfficher !";
	ft_putstr(str);
	ft_strrev(str);
	//str2 = ft_strrev(str);
    return (0);
}
