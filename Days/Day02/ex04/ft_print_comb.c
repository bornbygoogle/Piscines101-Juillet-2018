/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/04 16:48:31 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/04 20:26:30 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printntimes(char *string, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(string[i]);
		i++;
	}
}

void	ft_print_comb(void)
{
	char str[3];

	str[0] = '0';
	while (str[0] < '8')
	{
		str[1] = '0';
		while (str[1] < '9')
		{
			str[2] = '0';
			while (str[2] <= '9')
			{
				if ((str[2] > str[1]) && (str[1] > str[0]))
				{
					printntimes(str, 3);
					if (str[0] < '7')
					{
						printntimes(", ", 2);
					}
				}
				str[2]++;
			}
			str[1]++;
		}
		str[0]++;
	}
}
