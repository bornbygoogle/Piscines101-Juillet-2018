/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_eight_queens_puzzle.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 18:12:50 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 18:12:53 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_mandatory_recursive(int n)
{
	if (n > 92)
		return (ft_mandatory_recursive(n - 1));
	return (n);
}

int		ft_eight_queens_puzzle(void)
{
	return (ft_mandatory_recursive(101));
}
