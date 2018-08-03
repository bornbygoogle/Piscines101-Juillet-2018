/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 12:14:44 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 17:39:56 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_create_elem.c"
#include "ft_list.h"

int		main()
{
	t_list	*list;
	int		x;
	list = ft_create_elem(&x);
	x = 0;
	printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next); x++;
	printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next); x++;
	printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next); x++;
	printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next); x++;
	printf("%p = [%d\t| %p]\n", list, *(int*)(list->data), list->next);
	list = ft_create_elem(0);
	printf("%p = [%p\t| %p]\n", list, list->data, list->next);
}
