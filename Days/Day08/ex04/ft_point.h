/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_point.h                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 23:24:54 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/13 23:24:56 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct	s_point
{
	int			x;
	int			y;
}				t_point;

void			set_point(t_point *point);

#endif
