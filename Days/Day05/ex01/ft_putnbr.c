/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 09:02:21 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/09 09:02:25 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

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
