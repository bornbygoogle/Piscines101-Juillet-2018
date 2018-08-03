/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_count_if.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 08:46:08 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 09:45:34 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	index;
	int	compteur;

	index = 0;
	compteur = 0;
	while (tab[index])
	{
		if (f(tab[index]) == 1)
			compteur++;
		index++;
	}
	return (compteur);
}
