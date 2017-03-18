/*
** tab_game.c for tab_game in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Mon Mar 13 11:21:35 2017 Thomas Dominé
** Last update Sat Mar 18 15:45:26 2017 Thomas Dominé
*/

#include "../include/my.h"

void		memories(t_data *data, t_all *all)
{
	int		i;
	int		line;
	int		column;

	i = 0;
	line = all->size_height;
	column = all->size_width * 4;
	data->game = malloc(sizeof(char *) * (line + 1));
	data->game[line] = NULL;
	while (i < line)
	{
		data->game[i] = malloc(sizeof(char) * (column + 1));
		i += 1;
	}
}

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

void		init_tab(t_data *data, t_all *all)
{
	int		i;
	int		p;

	i = 0;
	while (data->game[i] != NULL)
	{
		p = 0;
		while (p < all->size_width * 2)
		{
			data->game[i][p] = ' ';
			p += 1;
		}
			data->game[i][all->size_width * 2] = '\0';
		i += 1;
	}
}

void	tab_game(t_data *data, t_all *all)
{
	frame(all);
	memories(data, all);
	init_tab(data, all);
	data->current = data->next_tet;
	data->game = tab_integration(data->game, data->current->shape, 0,
		all->size_width - data->current->width);
	tetrimino_coloration(data, data->current);
	//down_tetrimino(data, all);
	next_tetrimino(data, all);
}
