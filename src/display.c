/*
** display.c for display in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Sat Feb 25 15:46:57 2017 Thomas Dominé
** Last update Sat Mar 18 15:04:25 2017 Mohan Grewis
*/

#include "../include/my.h"

int			all_while(t_data *data, t_all *all, t_list *tetrimino)
{
	int		i;
	int		bol;
	char	buff[256];

	i = 0;
	bol = 0;
	data->list = tetrimino;
	while (i != 1)
	{
		read(0, buff, 256);
		if(my_strcmp(buff, all->key_quit) == 0)
			return (-1);
		clear();
		if (bol == 0)
		{
			data->next_tet = random_tetrimino(data->list);
			bol = 1;
		}
		score(data, all);
		tab_game(data, all);
		verif_screen(data, all);
		refresh();
		sleep(1);
	}
}

void			display(t_all *all, t_list *tetrimino)
{
	int			i;
	t_data		*data;
	int			bol;

	initscr();
	curs_set(0);
	i = 0;
	bol = 0;
	data = malloc(sizeof(t_data));
	data->score = 0;
	data->time = time(NULL);
	data->min = 0;
	all_while(data, all, tetrimino);
	endwin();
}
