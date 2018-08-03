/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_at.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 09:11:41 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 23:41:41 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*list;

	if (begin_list == NULL)
		return (NULL);
	else
	{
		list = begin_list;
		while (nbr > 1)
		{
			if (list == NULL)
				return (NULL);
			list = list->next;
			nbr--;
		}
	}
	return (list);
}
