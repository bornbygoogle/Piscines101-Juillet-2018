/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_size_test.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 12:14:44 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 19:25:57 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex01/ft_list_push_back.c"
#include "../ex02/ft_list_push_front.c"
#include "../ex00/ft_create_elem.c"
#include "ft_list_size.c"
#include "ft_list.h"

int		main()
{
	t_list	*list;
	int		x;
	int		y;
	
	x = 101;
	y = 42;
	list = NULL;
	/*list = ft_create_elem(&x);
	ft_list_push_front(&list, &y);
	ft_list_push_front(&list, &x);
	ft_list_push_front(&list, &y);*/
	printf("\n%d \n", ft_list_size(list));
	/*printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next); list = list->next;
	printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next); list = list->next;
	printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next); list = list->next;
	printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next);*/
	/*ft_list_push_back(&list, 0);
	ft_list_push_back(0, &y);
	ft_list_push_back(0, 0);*/
}
