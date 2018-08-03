/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/19 07:19:47 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/23 12:25:24 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "ft.h"

#define BUF_SIZE 1

void	ft_error(int error, char *filename)
{
	write(2, "cat: ", 5);
	write(2, filename, ft_strlen(filename));
	if (errno == EISDIR)
		write(2, ": Is a directory\n", 17);
	else if (error == EACCES)
		write(2, ": Permission denied\n", 20);
	else
		write(2, ": No such file or directory\n", 28);
}

void	ft_display_file(int ac, char **file)
{
	int		fd;
	int		i;
	char	*filename;
	char	buf[BUF_SIZE];

	i = 0;
	while (ac >= ++i)
	{
		filename = file[i];
		fd = open(filename, O_RDWR);
		if (fd < 0)
		{
			ft_error(errno, filename);
			continue;
		}
		while (write(1, buf, read(fd, buf, BUF_SIZE)) > 0)
			;
		close(fd);
	}
}

int		main(int argc, char **argv)
{
	char c;

	if (argc == 1)
	{
		while (read(STDIN_FILENO, &c, 1) > 0)
			ft_putchar(c);
	}
	else
		ft_display_file(argc - 1, argv);
	return (0);
}
