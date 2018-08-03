/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   sastantua.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/08 08:14:40 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/08 08:14:44 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void		ft_putchar(char c);

int			cal_y(int compt, int n)
{
	if (n > 0)
	{
		compt++;
		return (compt + cal_y(compt, --n));		
	}
	else
	{
		return (0);
	}
}

int			cal_compteurx(int n)
{
	if (n >= 3)
	{
		if (n % 2 == 0)
		{
			return (12+cal_compteurx(--n));
		}
		else
		{
			return (14+cal_compteurx(--n));
		}
	}
	else
	{
		return (0);
	}
}

int		cal_x(int size)
{
	int floor;
	int width;
	int floor_step;

	floor = 1;
	width = 1;
	floor_step = 4;
	while (floor <= size)
	{
		width += 2 * (2 + floor);
		floor++;
		width += floor_step;
		if (floor % 2 && floor < size)
			floor_step += 2;
	}
	width -= floor_step;
	return (width);
}

void	put_line(int space)
{
	int pos;

	pos = 0;
	while (pos < space)
	{
		ft_putchar(' ');
		pos++;
	}
}

void	put_blocks(int size, int floor, int width, int step)
{
	int door;
	int pos;

	door = 1 + 2 * ((floor - 1) / 2);
	pos = 0;
	while (pos < width)
	{
		if (pos == 0)
			ft_putchar('/');
		else if (pos == width - 1)
			ft_putchar('\\');
		else
		{
			if (floor == size && pos >= (width - door) / 2
					&& pos < (width + door) / 2 && 2 + floor - step <= door)
				if (door >= 5 && step == 2 + floor - door / 2 - 1
						&& pos == (width + door) / 2 - 2)
					ft_putchar('$');
				else
					ft_putchar('|');
			else
				ft_putchar('*');
		}
		pos++;
	}
}

void	draw_stage(int width)
{
	int pos;

	pos = 0;
	while (pos < width)
	{
		if (pos == 0)
			ft_putchar('/');
		else if (pos == width - 1)
			ft_putchar('\\');
		pos++;
	}
}

void	sastantua(int size)
{
	int	floor;
	int	height;
	int	step;
	int	width;

	if (size < 1)
		return ;
	floor = 1;
	width = 1;
	while (floor <= size)
	{
		height = 2 + floor;
		step = 0;
		while (step < height)
		{
			width += 2;
			put_line((cal_x(size) - width) / 2);
			draw_stage(size, floor, width, step);
			ft_putchar('\n');
			step++;
		}
		floor++;
		width += 4 + 2 * ((floor - 2) / 2);
	}
}
