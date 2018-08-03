
#include		<stdio.h>
#include		<time.h>

int		ft_recursive_power(int nb, int power);
void	ft_putstr(char *str);

int		main(void)
{
	int			nbr;
	int			power;
	double		temps;
	clock_t		t1;
	clock_t		t2;

	t1 = clock();
	nbr = 2;
	power = 4;
	printf("Chiffre nbr : %d\n", ft_recursive_power(nbr, power));
	t2 = clock();
	temps = (double)(t2 - t1) / CLOCKS_PER_SEC;
	printf("temps = %f s\n", temps);
	return (0);
}
