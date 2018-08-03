/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_push_params.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 09:18:17 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 21:10:56 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new_list;

	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		new_list = (*begin_list);
		while (new_list->next != NULL)
			new_list = new_list->next;
		new_list->next = ft_create_elem(data);
	}
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *new_list;

	new_list = NULL;
	while (--ac >= 0)
		ft_list_push_back(&new_list, av[ac]);
	return (new_list);
}
