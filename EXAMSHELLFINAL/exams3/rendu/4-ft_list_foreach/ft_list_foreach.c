/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_foreach.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/15 11:24:05 by wfoulon      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/20 16:53:28 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include "ft_list.h"

void		ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*list;

	list = begin_list;
	while (list)
	{
		(*f)(list->data);
		list = list->next;
	}
}

