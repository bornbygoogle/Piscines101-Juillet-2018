/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.101.fr>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 09:46:10 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 16:58:38 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

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

char	*ft_strcpy(char *dest, char *src)
{
	int	nb_dest;
	int	nb_src;

	nb_dest = ft_strlen(dest);
	nb_src = ft_strlen(src);
	fct_strcpy(dest, src, nb_dest);
	return (dest);
}
