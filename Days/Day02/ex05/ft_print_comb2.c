/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 18:26:33 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/05 18:26:35 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int chiffre;

	chiffre = 0;
	while (chiffre < 9900)
	{
		ft_putchar((chiffre / 1000) + 48);
		ft_putchar((chiffre % 1000) / 100 + 48);
		ft_putchar(' ');
		ft_putchar((chiffre % 100) / 10 + 48);
		ft_putchar(chiffre % 10 + 48);
		if (chiffre < 9899)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		chiffre++;
	}
}
