/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sort_wordtab.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 18:41:36 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 20:40:27 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int res;
	int index;
	int bool_check;

	res = 0;
	index = 0;
	bool_check = 1;
	while (bool_check)
	{
		if ((s1[index] - s2[index] != 0) || (s1[index] == '\0')
			|| (s2[index] == '\0'))
		{
			bool_check = 0;
		}
		res = s1[index] - s2[index];
		index++;
	}
	return (res);
}

void	ft_sort_wordtab(char **tab)
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
			if (ft_strcmp(tab[index_check], tab[index_tab]) < 0)
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
