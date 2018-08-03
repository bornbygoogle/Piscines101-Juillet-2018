#include <stdio.h>

int		ft_atoi(char *str);

int	main(void)
{
	int chiffre;

	chiffre = ft_atoi("-450bonjour42");
	printf("%d",chiffre);
	return 0;
}
