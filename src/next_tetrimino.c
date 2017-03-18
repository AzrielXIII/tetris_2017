/*
** next_tetrimino.c for next_tetrimino in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Fri Mar 17 17:10:02 2017 Thomas Dominé
** Last update Sat Mar 18 09:21:22 2017 Thomas Dominé
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

void 		frame_next(t_data *data)
{
	WINDOW *boite;

	boite = subwin(stdscr, data->next_tet->height + 4,
	data->next_tet->width * 1 + 4, 4, 58);
	box(boite, ACS_VLINE, ACS_HLINE);
}

void		print_next_tetrimino(t_data *data)
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
			mvprintw(6 + i, 60 + p, "%c", data->next_tet->shape[i][p]);
			attroff(COLOR_PAIR(color));
			p += 1;
		}
		i += 1;
	}
}

void		next_tetrimino(t_data *data)
{
	data->next_tet = random_tetrimino(data->list);
	next_color(data);
	frame_next(data);
	print_next_tetrimino(data);
}
