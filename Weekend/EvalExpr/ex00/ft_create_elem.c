/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_create_elem.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 08:34:44 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 20:22:14 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./includes/evalexpr.h"

t_stack	*ft_create_elem(char data)
{
	t_stack *new_elem;

	if (!(new_elem = (t_stack *)malloc(sizeof(*new_elem))))
		return (NULL);
	new_elem->data = data;
	new_elem->next = NULL;
	return (new_elem);
}
