/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_size.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 08:59:53 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 19:29:58 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	int		compteur;
	t_list	*cursor;

	if (!begin_list)
		return (0);
	cursor = begin_list;
	compteur = 0;
	while (cursor != NULL)
	{
		cursor = cursor->next;
		compteur++;
	}
	return (compteur);
}
