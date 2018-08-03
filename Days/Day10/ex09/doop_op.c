/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   doop_op.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 12:01:57 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 16:02:12 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

long long	ft_add(long long nb1, long long nb2)
{
	long long res;

	res = 0;
	res = res + nb1 + nb2;
	return (res);
}

long long	ft_sub(long long nb1, long long nb2)
{
	long long res;

	res = 0;
	res = res + nb1 - nb2;
	return (res);
}

long long	ft_mul(long long nb1, long long nb2)
{
	long long res;

	res = 1;
	res = res * nb1 * nb2;
	return (res);
}

long long	ft_div(long long nb1, long long nb2)
{
	long long res;

	res = 1;
	res = nb1 / nb2;
	return (res);
}

long long	ft_mod(long long nb1, long long nb2)
{
	long long res;

	res = 1;
	res = nb1 % nb2;
	return (res);
}
