/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   evalexpr.h                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 08:33:48 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 20:41:18 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "ft_stack.h"

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);

int		ft_countchar(char *str);
char	*purstr(char *str);

t_stack	*ft_create_elem(char data);
void	ft_char_push_back(t_stack **readchar, char c);

#endif
