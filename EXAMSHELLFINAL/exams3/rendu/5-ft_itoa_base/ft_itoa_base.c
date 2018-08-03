/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa_base.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-la-m <jde-la-m@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/09 14:55:03 by wfoulon      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/26 15:19:27 by jde-la-m    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

static int		ft_compte(unsigned long long value, int base)
{
	int ret;

	ret = 0;
	while (value != 0)
	{
		value /= base;
		ret++;
	}
	return (ret);
}

char	*ft_itoa_base(int value, int base)
{
	char		*ret;
	int			nb;
	int			i;
	char		*tab;
	int			sign;

	if (base < 2 || base > 16)
		return (NULL);
	if (base == 10 && value == -2147483648)
		return ("-2147483648");
	sign = 0;
	if (base == 10 && value < 0)
		sign = 1;
	if (value < 0)
		value = -value;
	if (value == 0)
		return ("0");
	tab = (char *)malloc(sizeof(char) * 17);
	tab = "0123456789ABCDEF";
	nb = ft_compte(value, base);
	nb += (sign == 1 ? 1 : 0);
	ret = (char *)malloc(sizeof(char) * (nb + 1));
	i = 1;
	sign == 1 ? (ret[0] = '-') : 0;
	while (value != 0)
	{
		ret[nb - i++] = tab[value % base];
		value /= base;
	}
	ret[nb] = '\0';
	return (ret);
}

int main(void)
{
	printf("%s\n", ft_itoa_base(2344234, 10));
	return 0;
}
