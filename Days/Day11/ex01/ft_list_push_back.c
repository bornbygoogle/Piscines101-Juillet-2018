/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_push_back.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 08:39:49 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/21 17:58:20 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_back(t_list **readchar, char c)
{
    t_list    *new;
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