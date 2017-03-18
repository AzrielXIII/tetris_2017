/*
** next_tetrimino.c for next_tetrimino in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Fri Mar 17 17:10:02 2017 Thomas Dominé
** Last update Sat Mar 18 13:44:57 2017 Thomas Dominé
*/

#include "../include/my.h"

void		next_color(t_data *data)
{
	int		i;
	int		p;

	i = 0;
	while (data->next_tet->shape[i] != NULL)
	{
		p = 0;
		while (data->next_tet->shape[i][p] != '\0')
		{
			if (data->next_tet->shape[i][p] == '*')
			data->next_tet->shape[i][p] = select_letter(data->next_tet->color);
			p += 1;
		}
		i += 1;
	}
}

void 		frame_next(t_data *data, t_all *all)
{
	WINDOW *boite;

	attron(COLOR_PAIR(9));
	boite = subwin(stdscr, data->next_tet->height + 4,
	data->next_tet->width + 4, LINES / 2 - (all->size_height / 2 + 1),
	COLS / 2 + (all->size_width + 2));
	box(boite, ACS_VLINE, ACS_HLINE);
	attroff(COLOR_PAIR(9));
}

void		print_next_tetrimino(t_data *data, t_all *all)
{
	int		i;
	int		p;
	int		color;

	i = 0;
	color_init();
	while (data->next_tet->shape[i] != NULL)
	{
		p = 0;
		while (data->next_tet->shape[i][p] != '\0')
		{
			color = select_color(data->next_tet->shape[i][p]);
			if (color != 0)
			attron(COLOR_PAIR(color));
			mvprintw(LINES / 2 - (all->size_height / 2 - 1) + i,
				COLS / 2 + (all->size_width + 4) + p,
				"%c", data->next_tet->shape[i][p]);
			attroff(COLOR_PAIR(color));
			p += 1;
		}
		i += 1;
	}
}

void		next_tetrimino(t_data *data, t_all *all)
{
	while (data->next_tet == data->current)
	data->next_tet = random_tetrimino(data->list);
	next_color(data);
	if (all->enable_next == 1)
	{
		frame_next(data, all);
		print_next_tetrimino(data, all);
	}
}
