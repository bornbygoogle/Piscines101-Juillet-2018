/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.101.fr>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 16:07:57 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 18:16:10 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*res;
	char	*key;

	while (*str)
	{
		res = str;
		key = to_find;
		while (*str && *key && *key == *str)
		{
			str++;
			key++;
		}
		if (!*key)
			return (res);
		str = res + 1;
	}
	return (0);
}
