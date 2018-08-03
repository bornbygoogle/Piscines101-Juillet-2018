
#include		<stdio.h>
#include		<time.h>

int		ft_find_next_prime(int nb);
void	ft_putstr(char *str);

int		main(void)
{
	int			nbr;
	double		temps;
	clock_t		t1;
	clock_t		t2;

	t1 = clock();
	nbr = 121;
	printf("Chiffre %d est un nombre premier !\n", ft_find_next_prime(nbr));
	t2 = clock();
	temps = (double)(t2 - t1) / CLOCKS_PER_SEC;
	printf("temps = %f s\n", temps);
	return (0);
}
