/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 16:44:11 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/18 20:32:02 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex00/ft_create_elem.c"
#include "ft_list_push_params.c"
#include "ft_list.h"

int     main(int argc, char **argv)
{
    t_list  *list;
    int     i;
    i = 1;
    list = ft_list_push_params(argc, argv);
    while (list)
    {
        printf("%p = [%s\t| %p]\n", list, list->data, list->next);
        list = list->next;
    }
    return (0);
}