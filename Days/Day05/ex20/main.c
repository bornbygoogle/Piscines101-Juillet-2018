/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.101.fr>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 22:07:30 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 22:47:05 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putnbr_base.c"

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr,char *base);

int		main(void)
{
	unsigned int	nbr;

	char base[] = "01";
	nbr = 10;
	ft_putnbr_base(nbr, base);
	return (0);
}