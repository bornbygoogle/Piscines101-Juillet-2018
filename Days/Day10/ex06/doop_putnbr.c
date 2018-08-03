/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   doop_putnbr.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 10:58:28 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 19:30:36 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

void	doop_putnbr(long long nb)
{
	long long	temp;
	long long	size;

	size = 1;
	if (nb < 0)
	{
		doop_putchar('-');
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
		doop_putchar(((temp / size)) + 48);
		temp %= size;
		size /= 10;
	}
}
