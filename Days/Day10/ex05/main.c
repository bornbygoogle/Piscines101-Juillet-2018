/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 11:04:15 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 09:28:27 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

typedef	int	(*pt_ft_croissant)(int, int);;
int ft_is_sort(int *tab, int length, int(*f)(int, int));

int	ft_croissant(int a, int b)
{
	if (a < b)
		return (-1);
	else if (a == b)
		return (0);
	return (1);
}

int main(void)
{
	pt_ft_croissant	pt_croissant;
	int tab[10] = {2,3,4,5,5,6,7,8,9,9};
	pt_croissant = &ft_croissant;
	printf("%d ",ft_is_sort(tab, 10, pt_croissant)); 
	return (0);
}
