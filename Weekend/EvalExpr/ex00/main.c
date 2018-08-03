/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 08:25:57 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 21:16:22 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/evalexpr.h"

int	main(int argc, char **argv)
{
	//char	*res;
	t_stack		*list;
	t_stack		*temp;
	int			index;

	index = 0;
	list = NULL;
	temp = list;
	if (argc == 2)
	{
		printf(" %p %p \n",list, temp);
		//ft_putnbr(eval_expr(argv[1]));
		while (argv[1][index] != '\0')
		{
			printf(" %p %p %c\n",list, temp,argv[1][index]);
			ft_char_push_back(&list, argv[1][index]);
			printf("%c",list->data);
			list = list->next;
			index++;
		}
		printf(" %p %p \n",list, temp);
		//list = temp;
		printf(" %p %p \n",list, temp);
		if (list != NULL)
			printf("fdafdasfasfads\n");
		while (temp->data != 's')
		{
			ft_putchar(temp->data);
			temp = temp->next;
		}
		/*(void)argv;
		res = purstr(argv[1]);
		ft_putstr(res);
		//ft_putnbr(231);
		ft_putchar('\n');*/
	}
	return (0);
}
