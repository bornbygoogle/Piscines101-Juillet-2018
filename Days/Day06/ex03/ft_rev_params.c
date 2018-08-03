/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_rev_params.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.101.fr>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 12:55:50 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/11 18:52:59 by mintran     ###    #+. /#+    ###.fr     */
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
	if (argc < 1)
		ft_putstr("ft_print_params usage : ./a.out test1 test2 test3");
	else
	{
		while (argc > 1)
		{
			ft_putstr(argv[--argc]);
			ft_putchar('\n');
		}
	}
	return (0);
}
