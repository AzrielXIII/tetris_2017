/*
** display.c for display in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Sat Feb 25 15:46:57 2017 Thomas Dominé
** Last update Thu Mar 16 15:59:51 2017 Thomas Dominé
*/

#include "../include/my.h"

void		all_while(t_data *data, t_all *all, t_tetrimino *tet,
						t_list *tetrimino)
{
	int		i;
	int		bol;

	i = 0;
	bol = 0;
	while (i != 1)
	{
		clear();
		if (bol == 0)
		{
			tet = random_tetrimino(tetrimino);
			bol = 1;
		}
		//score(data, all);
		tab_game(data, all, tetrimino, tet);
		refresh();
		sleep(10000000);
	}
}

void			display(t_all *all, t_list *tetrimino)
{
	int			i;
	t_data		*data;
	t_tetrimino	*tet;
	int			bol;

	initscr();
	curs_set(0);
	i = 0;
	bol = 0;
	data = malloc(sizeof(t_data));
	data->score = 0;
	data->time = time(NULL);
	data->min = 0;
	tet = random_tetrimino(tetrimino);
	all_while(data, all, tet, tetrimino);
	endwin();
}
