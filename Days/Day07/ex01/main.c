#include <unistd.h>
#include <stdio.h>
#include "ft_range.c"

int		cal_array_length(int min, int max);
int		*ft_range(int min, int max);

void	ft_putchar(int i)
{
	write(1, &i, 1);
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

void	ft_printarray(int *array, unsigned int array_length)
{
	unsigned int array_count;

	array_count = 0;
	while (array_count < array_length)
	{
		ft_putnbr(array[array_count]);
		ft_putchar('\n');
		array_count++;
	}
}

int main(void)
{
	int *array_nbrs;
	int min = -10;
	int max = 10;

	array_nbrs = ft_range(min, max);
	ft_printarray(array_nbrs, cal_array_length(min, max));
	return (0);
}