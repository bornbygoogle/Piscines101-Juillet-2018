/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   strcmp.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/20 11:57:11 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/20 13:30:44 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *str1, char *str2)
{
	int index;

	index = 0;
	while (str1[index])
	{
		if (str1[index] != str2[index])
			return (0);
		index++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		printf("%d",ft_strcmp(argv[1],argv[2]));
	return (0);
}
