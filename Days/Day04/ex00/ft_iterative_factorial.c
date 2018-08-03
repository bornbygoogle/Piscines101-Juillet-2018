/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 23:35:20 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/06 23:35:25 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		res;

	i = 1;
	res = 1;
	if ((nb < 0) || (nb > 12))
		res = 0;
	else if (nb == 0)
		res = 1;
	else
	{
		while (i <= nb)
		{
			res = res * i;
			i++;
		}
	}
	return (res);
}
