/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_unmatch.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 15:51:04 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/13 15:51:06 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int	ft_unmatch(int *tab,int length)
{
	int index;
	int index_bool;
	int index_bk;
	int temp;

	index = 0;
	index_bk = index;
	index_bool = 1;
	temp = tab[index];
	while (index < length && index_bool)
	{
		if (index_bool && index < length)
			index++;
		if (index == length)
		{
			temp = tab[index_bk];
			index_bk = index_bk + 1;
			index = index_bk;
		}
	}
	return (temp);
}

int main()
{
	int tab[] = {1,2,1,2,3,3,5,6,5,6};
	printf("%d\n",ft_unmatch(tab,9));	
}