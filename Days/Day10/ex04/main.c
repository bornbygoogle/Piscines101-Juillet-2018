/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/16 11:04:15 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 09:46:31 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

typedef	int	(*pt_ft_str_minuscule)(char *);;

int	ft_count_if(char **tab, int (*f)(char *));

int	ft_str_minuscule(char *str)
{
	while (str)
	{
		if (*str < 97 || *str > 122)
			return (1);
		str++;
	}
	return (0);
}

int main(void)
{
	pt_ft_str_minuscule	pt_str_minuscule;
	char *tab[] = {"fowriweo","9985643",0};
	pt_str_minuscule = &ft_str_minuscule;
	printf("%d ",ft_count_if(tab,pt_str_minuscule)); 
	return (0);
}
