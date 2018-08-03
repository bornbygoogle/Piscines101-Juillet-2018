/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   test-ex00.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 07:14:01 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 07:14:08 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include		<stdio.h>
#include		<time.h>

int		ft_iterative_power(int nb, int power);
void	ft_putstr(char *str);

int		main(void)
{
	int			nbr;
	int			power;
	double		temps;
	clock_t		t1;
	clock_t		t2;

	t1 = clock();
	nbr		=	1;
	power	=	2000000000;
	printf("Chiffre nbr : %d\n", ft_iterative_power(nbr, power));
	t2 = clock();
	temps = (double)(t2 - t1) / CLOCKS_PER_SEC;
	printf("temps = %f s\n", temps);
	return (0);
}
