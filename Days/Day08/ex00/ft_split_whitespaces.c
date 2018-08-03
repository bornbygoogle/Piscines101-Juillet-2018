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

char	*ft_strdup_from_n(char const *src, int n, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (len == 0)
		return (0);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == (NULL))
		return (NULL);
	while (i < len)
	{
		str[i] = src[n + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_fill(char **tab, char *s)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
	len = 0;
	while (s[i])
	{
		if (!(s[i] == 32 || (s[i] < 9 && s[i] > 13)))
		{
			len = 0;
			while (s[i] && !(s[i] == 32 || (s[i] < 9 && s[i] > 13)))
			{
				i++;
				len++;
			}
			tab[j++] = ft_strdup_from_n(s, (i - len), len);
		}
		else
			i++;
	}
	tab[j] = 0;
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char **tab;
	int	numbers;
	int	index;

	numbers = 0;
	index = 0;

	if (!(str[index] == 32 || (str[index] < 9 && str[index] > 13)))
		numbers++;
	while (str[index] != '\0')
	{
		if ((str[index] == 32 || (str[index] < 9 && str[index] > 13))
		&& !(str[index + 1] == 32 || (str[index + 1] < 9 && str[index + 1] > 13)))
			numbers = numbers + 1;
		index = index + 1;
	}

	if (str == NULL)
		return (NULL);
	if (!(tab = malloc(sizeof(char *) * numbers + 1)))
		return (NULL);
	tab = ft_fill(tab, str);
	return (tab);
}
