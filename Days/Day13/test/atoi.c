/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   atoi.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/20 11:51:04 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/20 11:56:41 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int atoi(char *str)
{
	long long int result;
	long long int neg;

	result	= 0;
	neg		= -1;
	while (str && (*str == 32 || (*str > 9 && *str < 13)))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (str)
	{
		if (*str < 48 || *str > 57)
			return (result * neg);
		else
			result = result * 10 + (long long int)(*str - '0');
		str++;
	}
	return (result);
}

int main(int argc, char **argv)
{
	if (argc > 0)
		atoi(argv[1]);
	return (0);
}
