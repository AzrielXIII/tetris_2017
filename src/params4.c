/*
** params4.c for tetris in /home/mohan/Projet/Unix_System_Programmation/PSU_2016_tetris/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Wed Mar  8 11:50:12 2017 Mohan Grewis
** Last update Sat Mar 11 13:43:36 2017 Mohan Grewis
*/

#include "../include/my.h"

int			key_turn_set_short(t_all *all, t_list *list, char **argv, int i)
{
	i = i + 1;
	all->key_turn = argv[i];
	return (i);
}

int			key_turn_set_long(t_all *all, t_list *list, char **argv, int i)
{
	char	*str;

	str = str_extractor(argv[i]);
	all->key_turn = str;
	return (i);
}

int			key_quit_set_short(t_all *all, t_list *list, char **argv, int i)
{
	i = i + 1;
	all->key_quit = argv[i];
	return (i);
}

int			key_quit_set_long(t_all *all, t_list *list, char **argv, int i)
{
	char	*str;

	str = str_extractor(argv[i]);
	all->key_quit = str;
	return (i);
}
