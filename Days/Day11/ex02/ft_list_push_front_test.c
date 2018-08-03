/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_push_front_test.c                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 12:14:44 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 22:17:55 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list_push_front.c"
#include "../ex00/ft_create_elem.c"
#include "ft_list.h"

int		main()
{
	t_list	*list;
	int		x;
	int		y;
	
	x = 101;
	y = 42;
	//list = ft_create_elem(&x);
	ft_list_push_front(&list, &y);
	ft_list_push_front(&list, &x);
	ft_list_push_front(&list, &y);
	printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next); list = list->next;
	printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next); list = list->next;
	printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next);
	ft_list_push_front(&list, 0);
	ft_list_push_front(0, &y);
	ft_list_push_front(0, 0);
}
