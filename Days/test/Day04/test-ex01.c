
#include		<stdio.h>
#include		<time.h>

int		ft_recursive_factorial(int nb);
void	ft_putstr(char *str);

int		main(void)
{
	int			nbr;
	double		temps;
	clock_t		t1;
	clock_t		t2;

	t1 = clock();
	nbr = 4;
	printf("Chiffre nbr : %d\n", ft_recursive_factorial(nbr));
	t2 = clock();
	temps = (double)(t2 - t1) / CLOCKS_PER_SEC;
	printf("temps = %f s\n", temps);
	return (0);
}
