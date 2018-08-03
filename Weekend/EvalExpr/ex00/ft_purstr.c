/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_purstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 09:33:45 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 20:22:18 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./includes/evalexpr.h"

char	*purstr(char *str)
{
	int		compteur;
	int		index;
	char	*str_res;

	index = 0;
	compteur = 0;
	str_res = (char *)malloc(sizeof(char) * (ft_countchar(str) + 1));
	while (str[index] != '\0')
	{
		if (str[index] != 32 && (str[index] < 9 || str[index] > 13))
		{
			str_res[compteur] = str[index];
			compteur++;
			index++;
		}
		else
			index++;
	}
	str_res[compteur] = '\0';
	return (str_res);
}
