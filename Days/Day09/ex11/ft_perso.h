/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_perso.h                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 16:47:26 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/13 16:47:28 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef				FT_PERSO_H
#define				FT_PERSO_H

#include			<string.h>
#define				SAVE_THE_WORLD "Kill all mosquitoes"

typedef struct	s_perso
{
	char	*name;
	double	life;
	int		age;
	char	*profession;
}				t_perso;
#endif
