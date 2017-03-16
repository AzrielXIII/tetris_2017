/*
** tab_game.c for tab_game in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Mon Mar 13 11:21:35 2017 Thomas Dominé
** Last update Thu Mar 16 16:01:32 2017 Thomas Dominé
*/

#include "../include/my.h"

void		memories(t_data *data, t_all *all)
{
	int		i;
	int		line;
	int		column;

	i = 0;
	line = all->size_height * 2;
	column = all->size_width * 4;
	data->game = malloc(sizeof(char *) * (line + 1));
	data->game[line] = NULL;
	while (i < line)
	{
		data->game[i] = malloc(sizeof(char) * (column + 1));
		data->game[i][column] = '\0';
		i += 1;
	}
}

void 		frame(t_all *all)
{
	WINDOW *boite;

	boite = subwin(stdscr, all->size_height * 2 + 1,
	all->size_width * 4 + 1, 4, 29);
	box(boite, ACS_VLINE, ACS_HLINE);
}

void		test(t_data *data)
{
	int		i;
	int		p;

	i = 0;
	while (data->game[i] != NULL)
	{
		p = 0;
		while (data->game[i][p] != '\0')
		{
			data->game[i][p] = '*';
			p += 1;
		}
		i += 1;
	}
}

void		test_print(t_data *data, t_all *all)
{
	int		i;
	int		p;
	int		bol;

	i = 0;
	bol = 0;
	while (data->game[i] != NULL)
	{
			attron(COLOR_PAIR(7));
			printw("%i\n", i);
			//mvprintw(5 + i, 30, data->game[i]);
			attroff(COLOR_PAIR(7));
		i += 1;
	}
}

void	tab_game(t_data *data, t_all *all, t_list *tetrimino, t_tetrimino *tet)
{
	//frame(all);
	memories(data, all);
	test(data);
	//data->game = tab_integration(data->game, tet->shape, 1, all->size_width);
	test_print(data, all);
}
