/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_collatz_conjecture.c                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 16:43:24 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/13 16:43:27 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	if (!(base % 2))
		base = base / 2;
	else
		base = (base * 3) + 1;
	return (ft_collatz_conjecture(base) + 1);
}
