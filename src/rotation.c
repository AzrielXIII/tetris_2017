/*
** rotation.c for rotation in /home/azriel/Epitech/PSU_2016_tetris/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Sun Mar 19 19:45:28 2017 Thomas Dominé
** Last update Mon Mar 20 10:12:18 2017 Thomas Dominé
*/

#include "../include/my.h"

void		select_rotation(t_data *data, int i, int p)
{
	if (data->rotate == 0)
	{
		data->rotate = 1;
		data->game = tab_integration(data->game, data->current->shape90, i, p);
	}
	if (data->rotate == 1)
	{
		data->rotate = 2;
		data->game = tab_integration(data->game,
			data->current->shape180, i, p);
	}
	if (data->rotate == 2)
	{
		data->rotate = 3;
		data->game = tab_integration(data->game,
			data->current->shape270, i, p);
	}
	if (data->rotate == 3)
	{
		data->rotate = 0;
		data->game = tab_integration(data->game, data->current->shape, i, p);
	}
}

void		clear_maj(t_data *data)
{
	int		i;
	int		p;

	i = 0;
while (data->game[i] != NULL)
{
	p = 0;
	while (data->game[i][p] != '\0')
	{
		if (identification_char(data->game[i][p]) != 0)
		data->game[i][p] = ' ';
		p += 1;
	}
	i += 1;
}
}

void		rotation(t_data *data)
{
	int		i;
	int		p;
	int		stop;

	i = 0;
	stop = 0;
	while (data->game[i] != NULL && stop == 0)
	{
		p = 0;
		while (data->game[i][p] != '\0' && stop == 0)
		{
			if (identification_char(data->game[i][p]) != 0)
			stop = 1;
			if (stop == 0)
			p += 1;
		}
		if (stop == 0)
		i += 1;
	}
	clear_maj(data);
	select_rotation(data, i, p);
}
