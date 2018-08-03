/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strupcase.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 19:55:16 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/09 19:55:19 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		res;
	int		index;

	res = 0;
	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] > 96) && (str[index] < 123))
		{
			str[index] = str[index] - 32;
		}
		index++;
	}
	return (str);
}
