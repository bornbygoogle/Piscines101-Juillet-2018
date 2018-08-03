#include	<stdio.h>
#include	<unistd.h>
#include	"ft_putnbr.c"

void	ft_putnbr(int nb);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		main(void)
{
	int		nb;

	/* Test 		ft_putnbr		*/
	nb = 4562358;
	printf("Nbre input : ");
	ft_putnbr(nb);
	printf("\n");
	return (0);
}