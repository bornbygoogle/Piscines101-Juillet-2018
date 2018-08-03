/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_takes_place.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.101.fr>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/12 18:50:08 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 19:34:24 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour >= 0 || hour < 25)
	{
		if (hour < 12 && hour >= 0)
			printf("%d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
		if (hour == 12)
			printf("MIDI AND 0%d P.M.\n", 1);
		if (hour > 12 && hour < 24)
			printf("%d.00 P.M. AND %d.00 P.M.\n", hour, hour + 1);
		if (hour == 24)
			printf("MINUIT AND 0%d.00 A.M.\n", hour - 23);
	}
}
