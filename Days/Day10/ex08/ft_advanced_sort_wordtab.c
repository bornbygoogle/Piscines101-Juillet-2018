/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_advanced_sort_wordtab.c                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 20:39:32 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 21:00:35 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		index_tab;
	int		index_check;
	char	*temp;

	index_tab = 0;
	index_check = 0;
	while (tab[index_check])
	{
		index_tab = 0;
		while (tab[index_tab])
		{
			if (cmp(tab[index_check], tab[index_tab]) < 0)
			{
				temp = tab[index_check];
				tab[index_check] = tab[index_tab];
				tab[index_tab] = temp;
			}
			index_tab++;
		}
		index_check++;
	}
}
