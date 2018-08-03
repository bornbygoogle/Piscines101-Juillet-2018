/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_clear.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 12:42:51 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 21:10:19 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *freel;

	if (!begin_list || !*begin_list)
		return ;
	while (*begin_list)
	{
		freel = *begin_list;
		*begin_list = (*begin_list)->next;
		free(freel);
	}
	*begin_list = NULL;
}
