/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_base.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.101.fr>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 21:55:40 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 23:02:18 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strlen(char *str)
{
	int compteur;

	compteur = 0;
	while (*str != '\0')
	{
		str++;
		compteur++;
	}
	return (compteur);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		length_base(int nb)
{
	if (nb <= 0)
		return (0);
	else
		return (1 + length_base(nb/2));
}

char	*cal_binaire(int nbr)
{
	char	*buf;
	char	*res;
	int		index_result;

	res;
	index_result = 0;
	while (nbr != 0)
	{
		buf[index_result] = (nbr % 2) + 48 ;
		nbr = nbr / 2;
		index_result++;
	}
	
	res = buf;
	return (res);
}

void	ft_putnbr_base(int nbr,char *base)
{
	int	val_base;

	val_base = ft_strlen(base);
	ft_putstr(cal_binaire(nbr));
}
