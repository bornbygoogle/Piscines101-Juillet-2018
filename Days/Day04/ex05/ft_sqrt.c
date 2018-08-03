/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sqrt.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 08:29:03 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 08:29:05 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int	sqrt;

	if (nb < 0 || nb > 2147395600)
		return (0);
	sqrt = 1;
	while (sqrt * sqrt < nb)
	{
		if (sqrt * sqrt == nb)
			return (sqrt);
		sqrt++;
	}
	if (sqrt * sqrt == nb)
		return (sqrt);
	else
		return (0);
}
