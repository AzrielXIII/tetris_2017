/*
** tab_game.c for tab_game in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Mon Mar 13 11:21:35 2017 Thomas Dominé
** Last update Thu Mar 16 17:56:14 2017 Thomas Dominé
*/

#include "../include/my.h"

void		memories(t_data *data, t_all *all)
{
	int		i;
	int		line;
	int		column;

	i = 0;
	line = all->size_height;
	column = all->size_width;
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

	boite = subwin(stdscr, all->size_height + 2,
	all->size_width + 2, 4, 29);
	box(boite, ACS_VLINE, ACS_HLINE);
}

void		init_tab(t_data *data, t_all *all)
{
	int		i;
	int		p;

	i = 0;
	while (data->game[i] != NULL)
	{
		p = 0;
		while (p < all->size_width)
		{
			data->game[i][p] = ' ';
			p += 1;
		}
			data->game[i][all->size_width] = '\0';
		i += 1;
	}
}

void	tab_game(t_data *data, t_all *all, t_list *tetrimino, t_tetrimino *tet)
{
	frame(all);
	memories(data, all);
	init_tab(data, all);
	data->game = tab_integration(data->game, tet->shape, 1, 1);
	print_game(data);
}
