/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   strdup.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/20 13:30:57 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/20 16:54:09 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

char	*ft_strdup(char *str)
{
	int		length;
	char	*str_res;
	int		index;

	index = 0;
	length = ft_strlen(str);
	if (!(str_res = (char *)malloc(sizeof(*str_res) * (length + 1))))
		return (NULL);
	while (str[index] != '\0')
	{
		str_res[index] = str[index];
		index++;
	}
	str_res[index] = '\0';
	return (str_res);
}

char	*ft_strdup_from_n(char *str, int length, int pos)
{
	char	*str_res;
	int		index;

	index = 0;
	if (!(str_res = (char *)malloc(sizeof(*str_res) * (length + 1))))
		return (NULL);
	while (index < length)
	{
		str_res[index] = str[pos + index];
		index++;
	}
	str_res[index] = '\0';
	return (str_res);
}

char	**ft_fill(char **tab, char *str)
{
	int	index_tab;
	int	index_res;
	int	length;
	
	index_tab	= 0;
	index_res	= 0;
	length		= 0;
	while (str)
	{
		if (!(str[index_tab] == 32 || (str[index_tab] < 9 && str[index_tab] > 13)))
		{
			length++;
			while (str[index_tab] && !(str[index_tab] || (str[index_tab] < 9 && str[index_tab] > 13)))
			{
				index_tab++;
				length++;
			}
			tab[index_res++] = ft_strdup_from_n(str, (index_tab - length), length);
		}
		else
			index_tab++;
	}
	tab[index_tab] = 0;
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	int number;
	int index;
	char **tab;

	number = 0;
	index = 0;
	if (str[index] != '\0' && !(str[index] > 9 && str[index] < 13))
		number++;
	while (str[index])
	{
		if ((str[index] != '\0' && (str[index] < 9 || str[index] > 13))
				&& !(str[index + 1] > 9 || str[index + 1] < 13))
			number++;
		index++;
	}
	if (str == NULL)
		return (NULL);
	if (!(tab = malloc(sizeof(char *) * (number + 1))))	
		return (NULL);
	tab = ft_fill(tab, str);
	return (tab);
}

int		main(void)
{
	char *str;
	char *str_res;
	//char *str_res_n;
	char **str_split;

	str = "fdasf asdkf jh ewr qwrio uo";
	str_res = ft_strdup(str);
	printf("%s\n", str_res);
	//str_res_n = ft_strdup_from_n(str, 5, 3);
	//printf("%s", str_res_n);
	str_split = ft_split_whitespaces(str);

	return (0);
}
