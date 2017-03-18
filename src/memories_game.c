/*
** memories.c for memories in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Sat Mar 18 20:11:40 2017 Thomas Dominé
** Last update Sat Mar 18 20:16:11 2017 Thomas Dominé
*/

#include "../include/my.h"

void		memories_game(t_data *data, t_all *all)
{
	int		i;
	int		line;
	int		column;

	i = 0;
	line = all->size_height;
	column = all->size_width * 4;
	data->game = malloc(sizeof(char *) * (line + 1));
	data->game[line] = NULL;
	while (i < line)
	{
		data->game[i] = malloc(sizeof(char) * (column + 1));
		i += 1;
	}
}

void		init_tab(t_data *data, t_all *all)
{
	int		i;
	int		p;

	i = 0;
	while (data->game[i] != NULL)
	{
		p = 0;
		while (p < all->size_width * 2)
		{
			data->game[i][p] = ' ';
			p += 1;
		}
			data->game[i][all->size_width * 2] = '\0';
		i += 1;
	}
}
