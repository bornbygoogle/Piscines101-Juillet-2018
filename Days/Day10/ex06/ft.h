/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft.h                                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 10:08:48 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 19:30:55 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

void		doop_putchar(char c);
void		doop_putstr(char *str);
long long	doop_atoi(const char *str);
void		doop_putnbr(long long nb);
long long	doop_plus(long long nb1, long long nb2);
long long	doop_minus(long long nb1, long long nb2);
long long	doop_mul(long long nb1, long long nb2);
long long	doop_div(long long nb1, long long nb2);
long long	doop_mod(long long nb1, long long nb2);

#endif
