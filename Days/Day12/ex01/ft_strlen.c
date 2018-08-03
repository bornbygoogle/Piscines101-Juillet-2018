/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlen.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 12:07:14 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/19 08:10:43 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

int		ft_strlen(char *str)
{
	int compteur;

	compteur = 0;
	while (*str != '\0')
	{
		str++;
		compteur++;
	}
	return (compteur);
}
