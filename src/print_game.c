/*
** print_game.c for print_game in /home/azriel/Epitech/PSU_2016_tetris/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Thu Mar 16 16:58:45 2017 Thomas Dominé
** Last update Sat Mar 18 09:44:44 2017 Thomas Dominé
*/

#include "../include/my.h"

void		print_game(t_data *data, t_all *all)
{
	int		i;
	int		p;
	int		color;

	i = 0;
	color_init();
	while (data->game[i] != NULL)
	{
		p = 0;
		while (data->game[i][p] != '\0')
		{
			color = (select_color(data->game[i][p]));
			if (color != 0)
			attron(COLOR_PAIR(color));
			mvprintw(LINES / 2 - (all->size_height / 2) + i,
				COLS / 2 - all->size_width + p, "%c", data->game[i][p]);
			attroff(COLOR_PAIR(color));
			p += 1;
		}
		i += 1;
	}
}
