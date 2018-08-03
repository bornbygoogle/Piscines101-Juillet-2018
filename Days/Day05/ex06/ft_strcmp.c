/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 18:18:24 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/09 18:18:26 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int res;
	int index;
	int bool_check;

	res = 0;
	index = 0;
	bool_check = 1;
	while (bool_check)
	{
		if ((s1[index] - s2[index] != 0) || (s1[index] == '\0')
			|| (s2[index] == '\0'))
		{
			bool_check = 0;
		}
		res = s1[index] - s2[index];
		index++;
	}
	return (res);
}
