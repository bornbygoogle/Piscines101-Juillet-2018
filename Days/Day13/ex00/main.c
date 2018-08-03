/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/19 22:02:41 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/20 08:43:56 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>
#include "ft_btree.h"

void printTree(t_btree *tree)
{
    if(!tree) return;
    if(tree->left)  printTree(tree->left);
    printf("Cle = %d\n", *(int *)tree->item);
    if(tree->right) printTree(tree->right);
}

int main(void)
{
	t_btree *arbre;
	int x;
	int y;

	x = 10;
	arbre = btree_create_node(&x);
	y = x + 2;
	arbre->left = btree_create_node(&y);
	arbre->right = btree_create_node(&y);

	printTree(arbre);
	//getchar();
	return 0;
}
