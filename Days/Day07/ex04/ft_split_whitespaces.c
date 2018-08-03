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

char    *ft_strdup_from_n(char const *src, int n, size_t len)
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

int    check_char_forbidden(char c)
{
    if (c == 32 || c == 9 || c == 10 || c == 11 || c == 12 || c == 13)
        return (1);
    else
        return (0);
}

int     nbrs_word(char *str)
{
    int    numbers;
    int    index;

    numbers = 0;
    index = 0;
    if (!check_char_forbidden(str[index]))
        numbers++;
    while (str[index] != '\0')
    {
        if (check_char_forbidden(str[index]) && !check_char_forbidden(str[index + 1]))
            numbers = numbers + 1;
        index = index + 1;
    }
    return (numbers);
}

char    **ft_fill(char **tab, char *s)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
	len = 0;
	while (s[i])
	{
		if (!(s[i] == 32 || s[i] == '\t' || s[i] == '\n'))
		{
			len = 0;
			while (s[i] && !(s[i] == 32 || s[i] == '\t' || s[i] == '\n'))
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

	if (str == NULL)
		return (NULL);
	if (!(tab = malloc(sizeof(char *) * nbrs_word(str) + 1)))
		return (NULL);
	tab = ft_fill(tab, str);
	return (tab);
}
