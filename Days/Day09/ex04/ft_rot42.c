/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_rot42.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.101.fr>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/12 21:48:38 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/13 11:24:21 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int		i;
	int		index;

	i = 43;
	index = 0;
	while (str[index] != '\0')
	{
		i = 43;
		if ((str[index] >= 'a' && str[index] <= 'z')
				|| (str[index] >= 'A' && str[index] <= 'Z'))
		{
			while (i > 0)
			{
				str[index] = str[index] + 1;
				if ((str[index] > 'z') && (str[index] < ('z' + 2)))
					str[index] = 97;
				if ((str[index] > 'Z') && (str[index] < ('Z' + 2)))
					str[index] = 65;
				i--;
			}
		}
		index++;
	}
	return (str);
}
