/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_combn.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 22:16:21 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/05 22:16:28 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	sh_printn(char *string, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(string[i]);
		i++;
	}
}

void	ft_print_conbxn(char *x, int y, int n)
{
	if (y == n)
	{
		sh_printn(x, n);
		if (x[0] <= '9' - n)
		{
			sh_printn(", ", 2);
		}
		x[y - 1]++;
		return ;
	}
	if (y == 0)
	{
		x[y] = '0';
	}
	else
	{
		x[y] = x[y - 1] + 1;
	}
	while (x[y] <= '9')
	{
		ft_print_conbxn(x, y + 1, n);
	}
	x[y - 1]++;
	return ;
}

void	ft_print_combn(int n)
{
	char	a[9];
	int		i;

	i = 0;
	while (i < n)
	{
		a[i] = '0';
		i++;
	}
	ft_print_conbxn(a, 0, 5);
}
