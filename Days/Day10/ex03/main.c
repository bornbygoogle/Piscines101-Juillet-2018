/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 11:04:15 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 08:43:05 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef	int	(*pt_ft_str_minuscule)(char *);;

int				ft_any(char **tab, int(*f)(char *));

int	ft_str_minuscule(char *str)
{
	while (*str)
	{
		printf("%c ",*str);
		if (*str < 97 || *str > 122)
			return (0);
		str++;
	}
	return (1);
}

int main(void)
{
	pt_ft_str_minuscule	pt_str_minuscule;
	char *tab[2] = {"fowriweo","9985643"};
	pt_str_minuscule = &ft_str_minuscule;
	printf("%d ",ft_any(tab,pt_str_minuscule)); 
	return (0);
}
