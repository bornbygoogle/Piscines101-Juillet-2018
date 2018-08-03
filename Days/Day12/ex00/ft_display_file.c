/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_display_file.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/19 07:20:05 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/19 21:19:05 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft.h"

#define BUF_SIZE 25

int	fd_open(int fd)
{
	if (fd == -1)
		ft_errors("Open failed !!!");
	return (fd);
}

int	fd_close(int fd)
{
	if (close(fd) == -1)
		ft_errors("Close failed !!!");
	return (fd);
}

int	ft_display_file(char *argv)
{
	char		*file_name;
	int			fd;
	int			res_read;
	char		buf[BUF_SIZE];

	file_name = argv;
	fd = open(file_name, O_RDONLY);
	if (fd_open(fd) != -1)
	{
		while (write(1, buf, read(fd, buf, BUF_SIZE)) > 0)
			;
		if (fd_close(fd) != -1)
			return (0);
	}
	return (0);
}
