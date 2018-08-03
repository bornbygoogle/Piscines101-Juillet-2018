/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/20 15:45:12 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/20 23:31:10 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "btree_insert_data.c"
#include "../ex00/btree_create_node.c"

void	btree_print(t_btree *tree, int i)
{
	if (tree)
	{
		i++;
		printf("      [%p | %s - %d]\n", tree, (char*)(tree->item), i);
		if (tree->left)
		{
			printf("LEFT\t");
			btree_print(tree->left, i);
		}
		if (tree->right)
		{
			printf("RIGHT\t");
			btree_print(tree->right, i);
		}
	}
}

int		ft_strcmp(void *a, void *b)
{
	char *str = (char*)a;
	char *cmp = (char*)b;
	if (!*str && !*cmp)
		return (0);
	if (*str == *cmp)
		return (ft_strcmp(str + 1, cmp + 1));
	return (*str - *cmp);
}

int		main(void)
{
	t_btree *tree;

	tree = NULL;
	char str0[] = "2";
	char str1[] = "3";
	char str2[] = "4";
	char str3[] = "5";
	char str4[] = "1";
	btree_insert_data(&tree, &str0, &ft_strcmp);
	btree_insert_data(&tree, &str1, &ft_strcmp);
	btree_insert_data(&tree, &str2, &ft_strcmp);
	btree_insert_data(&tree, &str3, &ft_strcmp);
	btree_insert_data(&tree, &str4, &ft_strcmp);
	btree_print(tree, 0);
}