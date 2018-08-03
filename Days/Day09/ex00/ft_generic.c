/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_generic.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.101.fr>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/12 18:08:41 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 18:36:21 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_generic(void)
{
	char *str;

	str = "Tut tut ; Tut tut\n";
	ft_putstr(str);
}

int		main(void)
{
	ft_generic();
	return (0);
}
