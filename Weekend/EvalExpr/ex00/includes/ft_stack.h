/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_stack.h                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 08:04:10 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 20:53:06 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_PILE_H
# define FT_PILE_H

typedef struct s_stack	t_stack;

struct	s_stack
{
	struct s_stack	*next;
	char			data;
};

#endif
