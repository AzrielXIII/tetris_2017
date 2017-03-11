/*
** params2.c for tetris in /home/mohan/Projet/Unix_System_Programmation/PSU_2016_tetris/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Wed Mar  8 10:13:13 2017 Mohan Grewis
** Last update Sat Mar 11 13:40:19 2017 Mohan Grewis
*/

#include "../include/my.h"

char		*str_extractor_malloc(char *str)
{
	char	*r;
	int		i;
	int		j;

	i = 0;
	j = -1;
	while (str[i] != '\0')
	{
		if (j > -1)
			j = j + 1;
		if (str[i] == '=')
			j = 0;
		i += 1;
	}
	r = malloc(sizeof(char) * (j + 1));
	return (r);
}

int			debug_set(t_all *all, t_list *list, char **argv, int i)
{
	all->debug = 1;
	return (i);
}

int			key_left_set_short(t_all *all, t_list *list, char **argv, int i)
{
	i = i + 1;
	all->my_key_left = argv[i];
	return (i);
}

int			key_left_set_long(t_all *all, t_list *list, char **argv, int i)
{
	char	*str;

	str = str_extractor(argv[i]);
	all->my_key_left = str;
	return (i);
}
