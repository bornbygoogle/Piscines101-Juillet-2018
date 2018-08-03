/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_btree.h                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/19 11:41:49 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/19 11:54:46 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct s_btree	t_btree;

struct	s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
};

t_btree *btree_create_node(void *item);

#endif
