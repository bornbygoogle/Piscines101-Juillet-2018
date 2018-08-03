/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_next_prime.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 12:42:47 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 12:42:50 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	if (nb == 0 || nb == 1)
		return (0);
	i = 2;
	while (nb > i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int next_prime;
	int is_prime;

	if (nb < 2)
		return (2);
	next_prime = nb + 1;
	is_prime = ft_is_prime(next_prime);
	while (!is_prime)
	{
		next_prime++;
		is_prime = is_prime ^ ft_is_prime(next_prime);
	}
	return (next_prime);
}
