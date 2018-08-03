/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   btree_search_item.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/19 13:21:42 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/20 22:55:32 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	*btree_search_item(t_btree *root, void *data_ref,
								int (*cmpf)(void *, void *))
{
	if (root->left != NULL && cmpf(root->item, data_ref))
		return (btree_search_item(root->left, data_ref, cmpf));
	if (root && cmpf(root->item, data_ref))
		return (root->item);
	if (root->right != NULL && cmpf(root->item, data_ref))
		return (btree_apply_infix(root->right, data_ref, cmpf));
	return (NULL);
}
