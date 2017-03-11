/*
** debug2.c for tetris in /home/mohan/Projet/Unix_System_Programmation/PSU_2016_tetris/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Tue Mar  7 12:42:46 2017 Mohan Grewis
** Last update Sat Mar 11 13:51:34 2017 Mohan Grewis
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
	all->my_key_left = tigetstr("kcub1");
	all->my_key_right = tigetstr("kcuf1");
	all->key_turn = tigetstr("kcuu1");
	all->key_drop = tigetstr("kcud1");
	all->key_quit = "q";
	all->key_pause = " ";
	all->enable_next = 1;
	all->size_width = 10;
	all->size_height = 20;
	all->debug = 0;
	all->help = 0;
	return (all);
}

void	print_tetrimino_alpha_2(t_list *list, char a)
{
	if (list->name[0] == a)
	{
		my_printf("Tetriminos : Name %s : ", list->name);
		if (list->brick != NULL)
			print_tetrimino(list->brick);
		else
			my_printf("Error\n");
	}
}
