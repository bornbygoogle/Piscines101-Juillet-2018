/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 20:12:39 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 23:31:57 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex01/ft_list_push_back.c"
#include "../ex02/ft_list_push_front.c"
#include "../ex00/ft_create_elem.c"
#include "ft_list_at.c"
#include "ft_list.h"

int		main()
{
	t_list	*list;
	t_list	*temp;
	int		x;
	int		y;
	
	x = 101;
	y = 42;
	list = NULL;
	list = ft_create_elem(&x);
	ft_list_push_front(&list, &y);
	ft_list_push_front(&list, &x);
	ft_list_push_front(&list, &y);
	temp = ft_list_at(list,5);
	//printf("%p = \t %d \n", temp, *(char *)temp->data);
	printf("\n%p %p\n", temp, (char *)temp->data);
	/*printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next); list = list->next;
	printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next); list = list->next;
	printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next); list = list->next;
	printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next);*/
	/*ft_list_push_back(&list, 0);
	ft_list_push_back(0, &y);
	ft_list_push_back(0, 0);*/
}