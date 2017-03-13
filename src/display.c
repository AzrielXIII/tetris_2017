/*
** display.c for display in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Sat Feb 25 15:46:57 2017 Thomas Dominé
** Last update Mon Mar 13 11:01:50 2017 John Doe
*/

#include "../include/my.h"

void		display(t_all *all)
{
	int		i;
	t_data	*data;

	initscr();
	curs_set(0);
	i = 0;
	data = malloc(sizeof(t_data));
	data->score = 0;
	data->time = time(NULL);
	data->min = 0;
	while (i != 1)
	{
		i = 0;
		clear();
		score(data, all);
		tab_game(data, all);
		refresh();
	}
	endwin();
}
