/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcapitalize.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.101.fr>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 21:21:38 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 21:22:15 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char *res;

	res = str;
	while (*str)
	{
		if ((*str >= '0' && *str <= '9')
		|| (*str >= 'A' && *str <= 'Z')
		|| (*str >= 'a' && *str <= 'z'))
		{
			if (*str >= 'a' && *str <= 'z')
				*str -= 32;
			str++;
			while ((*str >= '0' && *str <= '9')
			|| (*str >= 'A' && *str <= 'Z')
			|| (*str >= 'a' && *str <= 'z'))
			{
				if (*str >= 'A' && *str <= 'Z')
					*str += 32;
				str++;
			}
		}
		str++;
	}
	str = res;
	return (res);
}
