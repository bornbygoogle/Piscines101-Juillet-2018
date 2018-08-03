/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 16:44:11 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 18:19:07 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex00/ft_create_elem.c"
#include "ft_list_push_back.c"
#include "ft_list.h"

int     main(void)
{
    /*t_list  *list;
	int		listnbr[5] = {1,2,3,4,5};
    int     i;
    i = 1;
    list = ft_list_push_back(listnbr);
    while (list)
    {
        printf("%s\n", list->data);
        list = list->next;
    }*/

	t_list	*list;
	int		x;
	int		y;
	
	x = 101;
	y = 42;
	list = ft_create_elem(&x);
	printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next);
	ft_list_push_back(&list, &y);
	printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next);
	ft_list_push_back(&list, &x);
	printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next);
	ft_list_push_back(&list, &y);
	/*printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next); list = list->next;
	printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next); list = list->next;
	printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next); 
	ft_list_push_back(&list, 0);
	ft_list_push_back(0, &y);
	ft_list_push_back(0, 0);*/
	return (0);
}