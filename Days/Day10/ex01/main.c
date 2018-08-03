/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 11:04:15 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/16 14:43:14 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef	void	(*pt_ft_putnbr)(int);;
void ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	check_int_max(int nb)
{
	if (nb == -2147483648 || nb == 2147483647)
	{
		if (nb == -2147483648)
		{
			ft_putchar('-');
			ft_putchar('2');
			ft_putstr("147483648");
		}
		else
		{
			ft_putchar('2');
			ft_putstr("147483647");
		}
	}
}

void	print_number(int nb)
{
	int	temp;
	int	size;

	size = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	temp = nb;
	while ((temp /= 10) > 0)
	{
		size *= 10;
	}
	temp = nb;
	while (size)
	{
		ft_putchar(((temp / size)) + 48);
		temp %= size;
		size /= 10;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648 || nb == 2147483647)
	{
		check_int_max(nb);
	}
	else if (nb > -2147483648 && nb < 2147483647)
	{
		print_number(nb);
	}
	else
	{
		return ;
	}
}


int main(void)
{
	pt_ft_putnbr	pt_putnbr;
	int				tab[1337];

	pt_putnbr = &ft_putnbr;
	ft_foreach(tab, 1337, pt_putnbr);
	return (0);
}
