/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 09:51:29 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 19:34:30 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int		check_operation(char operation)
{
	char	*op;

	op = "+-*/%";
	while (*op)
	{
		if (operation == *op)
			return (1);
		op++;
	}
	return (0);
}

void	doop_calcul(char op, long long nb1, long long nb2)
{
	long long	(*ope[5])(long long, long long);
	int			index;

	ope[0] = &doop_plus;
	ope[1] = &doop_minus;
	ope[2] = &doop_mul;
	ope[3] = &doop_div;
	ope[4] = &doop_mod;
	if (op == '+')
		index = 0;
	if (op == '-')
		index = 1;
	if (op == '*')
		index = 2;
	if (op == '/')
		index = 3;
	if (op == '%')
		index = 4;
	doop_putnbr(ope[index](nb1, nb2));
	doop_putchar('\n');
}

int		main(int argc, char **argv)
{
	char		*op;
	long long	nb2;

	op = "+-*/%";
	if (argc == 4)
	{
		if ((!check_operation(argv[2][0])) || (argv[2][1] != '\0'))
		{
			doop_putnbr(0);
			doop_putchar('\n');
			return (0);
		}
		nb2 = doop_atoi(argv[3]);
		if (argv[2][0] == '/' && nb2 == 0)
			doop_putstr("Stop: division by zero\n");
		else if (argv[2][0] == '%' && nb2 == 0)
			doop_putstr("Stop : modulo by zero\n");
		else
			doop_calcul(argv[2][0], doop_atoi(argv[1]), nb2);
	}
	return (0);
}
