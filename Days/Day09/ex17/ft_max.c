/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_max.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 13:14:17 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/13 13:23:27 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_max(int *tab, int length)
{
	int	index;
	int	max;

	index = 1;
	max = tab[0];
	while (index < length)
	{
		if (tab[index] > max)
			max = tab[index];
		index++;
	}
	return max;
}

