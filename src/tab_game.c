/*
** tab_game.c for tab_game in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Mon Mar 13 11:21:35 2017 Thomas Dominé
** Last update Sat Mar 18 22:22:51 2017 Thomas Dominé
*/

#include "../include/my.h"

void 		frame(t_all *all)
{
	WINDOW *boite;

	attron(COLOR_PAIR(15));
	boite = subwin(stdscr, all->size_height + 2,
	all->size_width * 2 + 2, LINES / 2 - (all->size_height / 2 + 1),
	COLS / 2 - (all->size_width + 1));
	box(boite, ACS_VLINE, ACS_HLINE);
	attroff(COLOR_PAIR(15));
}

void	tab_game(t_data *data, t_all *all)
{
	frame(all);
	data->current = data->next_tet;
	tetrimino_coloration(data, data->current);
	print_next(data, all);
	if (data->end == 1)
	{
		next_tetrimino(data, all);
		miniaturisation(data);
		data->game = tab_integration(data->game, data->current->shape, 0,
			all->size_width - data->current->width);
		data->end = 0;
		delet_line(data);
	}
	print_game(data, all);
	down_tetrimino(data, all);
	move_left(data, all);
	move_right(data, all);
}
