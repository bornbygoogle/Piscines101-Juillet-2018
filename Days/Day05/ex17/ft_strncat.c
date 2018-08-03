/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.101.fr>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 08:20:40 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 08:42:56 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int	index_src;
	int	index_dest;
	int	bool_check;

	bool_check = 1;
	while (bool_check)
	{
		index_src = 0;
		while ((src[index_src] != '\0') || (index_src < nb))
		{
			if (index_src > nb - 2)
				bool_check = 0;
			index_dest = 0;
			while (dest[index_dest] != '\0')
				index_dest++;
			if (dest[index_dest] == '\0')
				index_dest++;
			dest[index_dest] = src[index_src];
			index_dest++;
			index_src++;
		}
	}
	index_dest--;
	dest[index_dest] = '\0';
	return (dest);
}
