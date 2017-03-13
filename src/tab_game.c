/*
** tab_game.c for tab_game in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Mon Mar 13 11:21:35 2017 Thomas Dominé
** Last update Mon Mar 13 14:55:16 2017 Thomas Dominé
*/

#include "../include/my.h"

void		memories(t_data *data, t_all *all)
{
	int		i;

	i = 0;
	data->game = malloc(sizeof(char *) * all->size_height * 2);
	while (i < all->size_height * 2)
	{
		data->game[i] = malloc(sizeof(char) * all->size_width * 4);
		i += 1;
	}
}

void		test(t_data *data, t_all *all)
{
	int		i;
	int		p;
	int		bol;

	i = 0;
	bol = 0;
	while (i < all->size_height * 2)
	{
		p = 0;
		while (data->game[i][p] != '\0')
		{
			if (bol == 0)
			{
				data->game[i][p] = 'M';
				bol = 1;
			}
			else
			bol = 0;
			p += 1;
		}
		i += 1;
	}
}

void		print_test(t_data *data, t_all *all)
{
	int		i;

	i = 1;
	while (data->game[i] != NULL)
	{
		attron(COLOR_PAIR(5));
		printw(data->game[i]);
		i += 1;
	}
}

void 		frame(t_all *all)
{
	WINDOW *boite;

	boite = subwin(stdscr, all->size_height * 2 + 1,
	all->size_width * 4 + 1, 4, 29);
	attron(COLOR_PAIR(13));
	box(boite, ACS_VLINE, ACS_HLINE);
	attroff(COLOR_PAIR(13));
}

void		tab_game(t_data *data, t_all *all)
{
	memories(data, all);
	test(data, all);
	print_test(data, all);
	//frame(all);
}
