/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   doop_atoi.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 10:39:03 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 19:27:39 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

long long int	doop_atoi(const char *str)
{
	long long int	result;
	long long int	neg;

	result = 0;
	neg = 1;
	while (*str == 32 || (*str > 9 && *str < 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str)
	{
		if (*str < 48 || *str > 57)
			return (result * neg);
		else
			result = (result * 10) + (long long int)(*str - '0');
		str++;
	}
	return (result * neg);
}
