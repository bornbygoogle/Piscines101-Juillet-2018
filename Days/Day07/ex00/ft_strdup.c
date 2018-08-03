/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.101.fr>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/11 14:34:05 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 17:32:30 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int compteur;

	compteur = 0;
	while (*str != '\0')
	{
		str++;
		compteur++;
	}
	return (compteur);
}

void	fct_strcpy(char *dest, char *src, int nb_char_dest)
{
	int	compt_dest;

	compt_dest = 0;
	while (compt_dest < nb_char_dest)
	{
		if (src[compt_dest] != '\0')
			dest[compt_dest] = src[compt_dest];
		else
			dest[compt_dest] = '\0';
		compt_dest++;
	}
	dest--;
	*dest = '\0';
}

char	*ft_strdup(char *src)
{
	char	*str_res;
	int		src_length;
	int		char_count;

	char_count = 0;
	src_length = ft_strlen(src);
	str_res = (char *)malloc(sizeof(*str_res) * (src_length + 1));
	if (str_res == NULL)
		return (NULL);
	while (char_count < src_length)
	{
		str_res[char_count] = src[char_count];
		char_count++;
	}
	str_res[char_count] = '\0';
	return (str_res);
}
