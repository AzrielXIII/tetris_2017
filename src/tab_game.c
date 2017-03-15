/*
** tab_game.c for tab_game in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Mon Mar 13 11:21:35 2017 Thomas Dominé
** Last update Wed Mar 15 10:46:05 2017 Thomas Dominé
*/

#include "../include/my.h"

void		memories(t_data *data, t_all *all)
{
	int		i;

	i = 0;
	data->game = malloc(sizeof(char *) * all->size_height * 2);
	while (i < all->size_height * 2)
	{
		data->game[i] = malloc(sizeof(char) * all->size_width * 2);
		i += 1;
	}
	data->game[all->size_height * 2] = NULL;
}

void 		frame(t_all *all)
{
	WINDOW *boite;

	boite = subwin(stdscr, all->size_height * 2 + 1,
	all->size_width * 4 + 1, 4, 29);
	box(boite, ACS_VLINE, ACS_HLINE);
}

void		test_print()
{
	int		i;
	int		p;

	i = 0;
	p = 0;
}

void	tab_game(t_data *data, t_all *all, t_list *tetrimino, t_tetrimino *tet)
{
	frame(all);
	memories(data, all);
}
