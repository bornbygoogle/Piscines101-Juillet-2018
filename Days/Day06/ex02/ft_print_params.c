/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_params.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.101.fr>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 14:44:54 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 14:44:57 by mintran     ###    #+. /#+    ###.fr     */
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

int		main(int argc, char **argv)
{
	int	count_arg;

	count_arg = 1;
	if (argc < count_arg)
		ft_putstr("ft_print_params usage : ./a.out test1 test2 test3");
	else
	{
		while (count_arg < argc)
		{
			ft_putstr(argv[count_arg]);
			ft_putchar('\n');
			count_arg++;
		}
	}
	return (0);
}
