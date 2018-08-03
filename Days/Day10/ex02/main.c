/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 11:04:15 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 08:09:11 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef	void	(*pt_ft_increase_nbr)(int);;
int *ft_map(int *tab, int length, void(*f)(int));

void	ft_increase_nbr(int nb)
{
	printf("%d ",nb + 1);
}

int main(void)
{
	pt_ft_increase_nbr	pt_increase_nbr;
	int					tab[13];
	int					i;
	int					*tab2;

	pt_increase_nbr = &ft_increase_nbr;
	i = -1;
	while (++i < 13)
		tab[i] = i;
	tab2 = ft_map(tab, 13, pt_increase_nbr);
	return (0);
}
