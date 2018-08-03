/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split_whitespaces.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.101.fr>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/12 09:04:37 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 22:15:17 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**ft_split_whitespaces(char *str);
void	ft_sort_wordtab(char **tab);

int main(void)
{
	char	*str;
	int		index;
	char	**tab_res;
	int		numbers;

	numbers = 0;
	index = 0;
	str = "vogsphere: INFO You have read and write rights on this repository";

	if (!(str[index] == 32 || (str[index] < 9 && str[index] > 13)))
		numbers++;
	while (str[index] != '\0')
	{
		if ((str[index] == 32 || (str[index] < 9 && str[index] > 13))
		&& !(str[index + 1] == 32 || (str[index + 1] < 9 && str[index + 1] > 13)))
			numbers = numbers + 1;
		index = index + 1;
	}
	index = 0;
	tab_res = ft_split_whitespaces(str);
	while (index < numbers)
	{
		printf("%s\n", tab_res[index]);
		index++;
	}
	ft_sort_wordtab(tab_res);
	index = 0;
	while (index < numbers)
	{
		printf("%s\n", tab_res[index]);
		index++;
	}	
}
