/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_char_push_back.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 08:39:49 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 20:21:49 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./includes/evalexpr.h"

void	ft_char_push_back(t_stack **readchar, char c)
{
	t_stack	*new;

	new = *readchar;
	if (new != NULL)
	{
		while (new->next != NULL)
			new = new->next;
		new->next = ft_create_elem(c);
	}
	else
		*readchar = ft_create_elem(c);
}
