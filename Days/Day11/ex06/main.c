/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 16:44:11 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 21:10:08 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex00/ft_create_elem.c"
#include "../ex02/ft_list_push_front.c"
#include "ft_list_clear.c"
#include "ft_list.h"

int     main(void)
{
	t_list	*list;
	int		x;
	int		y;
	
	x = 101;
	y = 42;
	list = ft_create_elem(&x);
	ft_list_push_front(&list, &y);
	ft_list_push_front(&list, &x);
	ft_list_push_front(&list, &y);
	printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next); list = list->next;
	printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next); list = list->next;
	printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next);
	ft_list_push_front(&list, 0);
	ft_list_push_front(0, &y);
	ft_list_push_front(0, 0);
	ft_list_clear(&list);
	//printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next); list = list->next;
	//printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next);
}