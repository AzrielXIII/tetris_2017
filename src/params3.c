/*
** params3.c for tetris in /home/mohan/Projet/Unix_System_Programmation/PSU_2016_tetris/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Wed Mar  8 11:40:26 2017 Mohan Grewis
** Last update Sat Mar 11 13:42:58 2017 Mohan Grewis
*/

#include "../include/my.h"

int			key_right_set_short(t_all *all, t_list *list,
	 char **argv, int i)
{
	i = i + 1;
	all->my_key_right = argv[i];
	return (i);
}

int			key_right_set_long(t_all *all, t_list *list, char **argv, int i)
{
	char	*str;

	str = str_extractor(argv[i]);
	all->my_key_right = str;
	return (i);
}

int			key_drop_set_short(t_all *all, t_list *list, char **argv, int i)
{
	i = i + 1;
	all->key_drop = argv[i];
	return (i);
}

int			key_drop_set_long(t_all *all, t_list *list, char **argv, int i)
{
	char	*str;

	str = str_extractor(argv[i]);
	all->key_drop = str;
	return (i);
}
