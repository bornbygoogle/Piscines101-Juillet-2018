/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_concat_params.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.101.fr>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/11 20:26:58 by mintran      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 17:32:36 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		size_calculate(int argc, char **argv)
{
	int count_argc;
	int count_char;
	int size;

	count_argc = 0;
	size = 0;
	while (count_argc < argc)
	{
		count_char = 0;
		while (argv[count_argc][count_char])
			count_char++;
		size += count_char++;
		count_argc++;
	}
	return (size);
}

char	*fill_buffer(int argc, char **argv, char *str_res)
{
	int count_argc;
	int count_char;
	int count_char_res;

	count_argc = 1;
	count_char_res = 0;
	while (count_argc < argc)
	{
		count_char = 0;
		while (argv[count_argc][count_char])
		{
			str_res[count_char_res] = argv[count_argc][count_char];
			count_char++;
			count_char_res++;
		}
		count_argc++;
		if (count_argc <= argc)
		{
			str_res[count_char_res] = '\n';
			count_char_res++;
		}
	}
	str_res[count_char_res] = '\0';
	return (str_res);
}

char	*ft_concat_params(int argc, char **argv)
{
	char *str_res;

	if (argc < 1)
		return (NULL);
	str_res = (char *)malloc(sizeof(*str_res) * size_calculate(argc, argv));
	if (str_res == NULL)
		return (NULL);
	str_res = fill_buffer(argc, argv, str_res);
	return (str_res);
}
