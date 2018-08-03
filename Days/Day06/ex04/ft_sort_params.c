/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sort_params.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.101.fr>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 12:55:50 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/11 21:03:28 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

int		ft_strcmp(char *s1, char *s2)
{
	int res;
	int index;
	int bool_check;

	res = 0;
	index = 0;
	bool_check = 1;
	while (bool_check)
	{
		if ((s1[index] - s2[index] != 0) || (s1[index] == '\0')
			|| (s1[index] == '\0'))
		{
			bool_check = 0;
		}
		res = s1[index] - s2[index];
		index++;
	}
	return (res);
}

void	fct_tri(int argc, char **argv)
{
	int		index;

	index = 1;
	while (index < (argc - 1))
	{
		if (ft_strcmp(argv[index + 1], argv[index]) < 0)
		{
			ft_swap(&argv[index + 1], &argv[index]);
			index = 1;
		}
		else
			index++;
	}
}

int		main(int argc, char **argv)
{
	int index;

	index = 1;
	if (argc < 1)
		ft_putstr("ft_print_params usage : ./a.out test1 test2 test3");
	else
	{
		fct_tri(argc, argv);
		while (argc > index)
		{
			ft_putstr(argv[index]);
			ft_putchar('\n');
			index++;
		}
	}
	return (0);
}
