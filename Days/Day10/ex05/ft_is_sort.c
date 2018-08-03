/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is_sort.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 09:10:02 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 09:28:54 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	index;

	index = 0;
	while (index < (length - 1))
	{
		if (f(tab[index], tab[index + 1]) > 0)
			return (0);
		index++;
	}
	return (1);
}
