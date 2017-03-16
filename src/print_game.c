/*
** print_game.c for print_game in /home/azriel/Epitech/PSU_2016_tetris/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Thu Mar 16 16:58:45 2017 Thomas Dominé
** Last update Thu Mar 16 17:55:45 2017 Thomas Dominé
*/

#include "../include/my.h"

int			select_color(char c)
{
	int		i;

	i = 0;
	if (c == 'R' || c == 'r')
	i = 1;
	if (c == 'G' || c == 'g')
	i = 2;
	if (c == 'Y' || c == 'y')
	i = 3;
	if (c == 'B' || c == 'b')
	i = 4;
	if (c == 'M' || c == 'm')
	i = 5;
	if (c == 'C' || c == 'c')
	i = 6;
	return (i);
}

void		print_game(t_data *data)
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
			mvprintw(5 + i, 30 + p, "%c", data->game[i][p]);
			attroff(COLOR_PAIR(color));
			p += 1;
		}
		i += 1;
	}
}
