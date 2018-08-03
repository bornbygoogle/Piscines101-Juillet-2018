/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlowcase.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.101.fr>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 20:54:06 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 20:51:41 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		res;
	int		index;

	res = 0;
	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] >= 'A') && (str[index] < 'Z'))
		{
			str[index] = str[index] + 32;
		}
		index++;
	}
	return (str);
}
