/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_map.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 18:55:47 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 08:04:31 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *tab_res;
	int index;

	index = 0;
	tab_res = (int *)malloc(sizeof(int) * (length + 1));
	while (index < length)
	{
		tab_res[index] = f(tab[index]);
		index++;
	}
	return (tab_res);
}
