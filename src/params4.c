/*
** params4.c for tetris in /home/mohan/Projet/Unix_System_Programmation/PSU_2016_tetris/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Wed Mar  8 11:50:12 2017 Mohan Grewis
** Last update Wed Mar  8 11:53:51 2017 Mohan Grewis
*/

#include "../include/my.h"

int			key_turn_set_short(t_all *all, t_list *list, char **argv, int i)
{
	i = i + 1;
	if (argv[i][1] != '\0')
	{
		if (all->help == 0)
			help(all, list, argv, i);
		exit(84);
	}
	all->key_turn = argv[i][0];
	return (i);
}

int			key_turn_set_long(t_all *all, t_list *list, char **argv, int i)
{
	char	*str;

	str = str_extractor(argv[i]);
	if (str[1] != '\0')
	{
		if (all->help == 0)
			help(all, list, argv, i);
		exit(84);
	}
	all->key_turn = str[0];
	return (i);
}
