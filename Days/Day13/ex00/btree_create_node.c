/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   btree_create_node.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/19 11:53:34 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/19 23:05:35 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*node;

	if (!(node = (t_btree *)malloc(sizeof(*node))))
		return (NULL);
	node->left = NULL;
	node->item = item;
	node->right = NULL;
	return (node);
}
