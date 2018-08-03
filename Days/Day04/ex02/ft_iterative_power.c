/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_power.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 08:04:34 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 08:04:35 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		count;
	long	res;

	count = 0;
	res = 1;
	while (count < power)
	{
		res = res * nb;
		count++;
	}
	return (res);
}
