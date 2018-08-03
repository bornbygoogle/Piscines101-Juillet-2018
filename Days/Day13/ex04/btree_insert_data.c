/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   btree_insert_data.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/19 22:07:57 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/20 23:39:51 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	btree_insert_data(
			t_btree **node,
			void *item,
			int (*fnc)(void *, void *))
{
	if (!node || !fnc)
		return ;
	if (!*node)
		*node = btree_create_node(item);
	else if ((*fnc)(item, (*node)->item) < 0)
		btree_insert_data(&(*node)->left, item, fnc);
	else
		btree_insert_data(&(*node)->right, item, fnc);
}
