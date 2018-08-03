/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   btree_level_count.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/20 10:41:43 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/20 11:13:51 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

int	btree_level_count(t_btree *root)
{
	int		btree_lv_left;
	int		btree_lv_right;
	int		btree_lv;

	if (root)
	{
		btree_lv_left = btree_level_count(root->left);
		btree_lv_right = btree_level_count(root->right);
		if (btree_lv_left > btree_lv_right)
			btree_lv = 1 + btree_lv_left;
		else
			btree_lv = 1 + btree_lv_right;
	}
	else
		return (-1);
}
