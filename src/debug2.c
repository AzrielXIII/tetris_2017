/*
** debug2.c for tetris in /home/mohan/Projet/Unix_System_Programmation/PSU_2016_tetris/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Tue Mar  7 12:42:46 2017 Mohan Grewis
** Last update Wed Mar  8 11:17:19 2017 Mohan Grewis
*/

#include "../include/my.h"

int		count_tetrimino(t_list *list)
{
	int	i;

	i = 0;
	while (list != NULL)
	{
		list = list->next;
		i += 1;
	}
	return (i);
}

t_all		*set_default()
{
	t_all	*all;

	all = malloc(sizeof(t_all));
	all->level = 1;
	all->my_key_left = KEY_LEFT;
	all->my_key_right = KEY_RIGHT;
	all->key_turn = KEY_UP;
	all->key_drop = KEY_DOWN;
	all->key_quit = 'q';
	all->key_pause = ' ';
	all->enable_next = 1;
	all->size_width = 10;
	all->size_height = 20;
	all->debug = 0;
	all->help = 0;
	return (all);
}
