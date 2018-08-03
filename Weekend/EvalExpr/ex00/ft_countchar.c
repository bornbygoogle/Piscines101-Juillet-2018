/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_countchar.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 10:15:41 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 20:22:06 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./includes/evalexpr.h"

int	ft_countchar(char *str)
{
	int		compteur;
	int		index;

	index = 0;
	compteur = 0;
	while (str[index] != '\0')
	{
		if (str[index] != 32 && (str[index] < 9 || str[index] > 13))
			compteur++;
		index++;
	}
	return (compteur);
}
