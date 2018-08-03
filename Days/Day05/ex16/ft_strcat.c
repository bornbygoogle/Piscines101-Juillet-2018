/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.101.fr>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 22:29:17 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 08:44:22 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		index_src;
	int		index_dest;

	index_src = 0;
	while (src[index_src] != '\0')
	{
		index_dest = 0;
		while (dest[index_dest] != '\0')
			index_dest++;
		if (dest[index_dest] == '\0')
			index_dest++;
		dest[index_dest] = src[index_src];
		index_dest++;
		index_src++;
	}
	index_dest--;
	dest[index_dest] = '\0';
	return (dest);
}
