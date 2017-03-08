/*
** params5.c for tetris in /home/mohan/Projet/Unix_System_Programmation/PSU_2016_tetris/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Wed Mar  8 13:39:57 2017 Mohan Grewis
** Last update Wed Mar  8 14:08:58 2017 Mohan Grewis
*/

#include "../include/my.h"

static int	my_get_nbr(char *str, int *i)
{
	int		nb;

	nb = 0;
	while (str[*i] != '\0' && str[*i] != ',')
	{
		nb *= 10;
		if (str[*i] < '0' || str[*i] > '9')
			return (-1);
		nb += str[*i] - '0';
		*i += 1;
	}
	return (nb);
}

int			key_pause_set_short(t_all *all, t_list *list, char **argv, int i)
{
	i = i + 1;
	if (argv[i][1] != '\0')
	{
		if (all->help == 0)
			help(all, list, argv, i);
		exit(84);
	}
	all->key_pause = argv[i][0];
	return (i);
}

int			key_pause_set_long(t_all *all, t_list *list, char **argv, int i)
{
	char	*str;

	str = str_extractor(argv[i]);
	if (str[1] != '\0')
	{
		if (all->help == 0)
			help(all, list, argv, i);
		exit(84);
	}
	all->key_pause = str[0];
	return (i);
}

int			cols_and_rows_set(t_all *all, t_list *list, char **argv, int i)
{
	char	*str;
	int		a;

	a = 0;
	str = str_extractor(argv[i]);
	all->size_width = my_get_nbr(str, &a);
	if (all->size_width == -1)
	{
		if (all->help == 0)
			help(all, list, argv, i);
		exit(84);
	}
	a = a + 1;
	all->size_height = my_get_nbr(str, &a);
	if (all->size_height == -1)
	{
		if (all->help == 0)
			help(all, list, argv, i);
		exit(84);
	}
	return (i);
}

int			set_next(t_all *all, t_list *list, char **argv, int i)
{
	all->enable_next = 0;
	return (i);
}
