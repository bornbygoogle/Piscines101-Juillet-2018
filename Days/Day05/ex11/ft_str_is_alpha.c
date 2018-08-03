/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_str_is_alpha.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.101.fr>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 21:50:15 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 17:38:07 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		index;

	index = 0;
	if (*str == '\0')
		return (1);
	while (str[index] != '\0')
	{
		if ((str[index] >= 'a' && str[index] <= 'z') ||
				(str[index] >= 'A' && str[index] <= 'Z'))
			index++;
		else
			return (0);
	}
	return (1);
}
