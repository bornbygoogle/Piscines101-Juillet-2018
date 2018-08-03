/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_last.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 09:11:41 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 21:33:10 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *list_temp;

	if (!begin_list)
		return (NULL);
	list_temp = begin_list;
	while (begin_list)
	{
		list_temp = begin_list;
		begin_list = begin_list->next;
	}
	return (list_temp);
}
