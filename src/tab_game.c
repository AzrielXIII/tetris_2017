/*
** tab_game.c for tab_game in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Sat Mar 11 16:44:28 2017 John Doe
** Last update Sat Mar 11 16:57:11 2017 John Doe
*/

#include "../include/my.h"

void		memories(t_data *data, t_all *all)
{
	int		i;

	i = 0;
	data->game = malloc(sizeof(char *) * all->size_width);
	data->game[all->size_width] = NULL;
	while (data->game[i] != NULL)
	{
		data->game[i] = malloc(sizeof(char) * all->size_height);
		i += 1;
	}
}

void		tab_game(t_data *data, t_all *all)
{
	memories(data, all);
}
