/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrev.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 23:17:24 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/06 23:17:28 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	tmp;
	int		str_size;
	int		str_count;

	str_size = 0;
	str_count = 0;
	while (str[str_size + 1] != '\0')
	{
		str_size++;
	}
	while (str_count < str_size)
	{
		tmp = str[str_count];
		str[str_count] = str[str_size];
		str[str_size] = tmp;
		str_count++;
		str_size--;
	}
	return (str);
}
