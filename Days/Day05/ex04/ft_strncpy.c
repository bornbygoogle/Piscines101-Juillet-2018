/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.101.fr>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 14:04:26 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/11 15:52:31 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		nb_dest;


	nb_dest = 0;
	while (*src && nb_dest < n)
	{
		dest[nb_dest] = src[nb_dest];
		nb_dest++;
	}
	return (dest);
}
