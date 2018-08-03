/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultimate_range.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.101.fr>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/11 20:08:07 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 17:32:34 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		cal_array_length(int min, int max)
{
	unsigned int taille;

	if (min < 0 && max > 0)
		taille = (max + min * (-1));
	if (min < 0 && max < 0)
		taille = (min * (-1) - max * (-1));
	if (min >= 0 && max >= 0)
		taille = (max - min);
	return (taille);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	int *array_res;
	int array_length;
	int array_count;

	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	else
	{
		array_count = 0;
		array_length = cal_array_length(min, max);
		array_res = (int *)malloc(sizeof(*array_res) * (array_length + 1));
		if (array_res == NULL)
			return (0);
		while (array_count < array_length)
		{
			array_res[array_count] = min + array_count;
			array_count++;
		}
		*range = array_res;
	}
	return (array_length);
}
