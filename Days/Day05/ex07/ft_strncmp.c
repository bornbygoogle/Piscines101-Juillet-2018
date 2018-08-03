/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 19:00:30 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/09 19:00:33 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				res;
	unsigned int	index;
	int				bool_check;

	res = 0;
	index = 0;
	bool_check = 1;
	while (bool_check)
	{
		res = s1[index] - s2[index];
		if ((s1[index] - s2[index] != 0) || (s1[index] == '\0')
			|| (s2[index] == '\0') || (index > n - 2))
			bool_check = 0;
		index++;
	}
	return (res);
}
