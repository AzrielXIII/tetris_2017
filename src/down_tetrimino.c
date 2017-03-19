/*
** down_tetrimino.c for down_tetrimino in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Sat Mar 18 13:57:14 2017 Thomas Dominé
** Last update Sun Mar 19 14:03:04 2017 Thomas Dominé
*/

#include "../include/my.h"

int			count(t_data *data)
{
	int		i;

	i = 0;
	while (data->game[i] != NULL)
	i += 1;
	return (i - 1);
}

void		move_down(t_data *data, int i)
{
	int		p;
	int		end;

	end = 0;
	while (data->game[end] != NULL)
	end += 1;
	while (i >= 0)
	{
		p = 0;
		while (data->game[i][p] != '\0')
		{
			if (identification_char(data->game[i][p]) != 0 && (i < end - 1))
			{
				data->game[i + 1][p] = data->game[i][p];
				data->game[i][p] = ' ';
			}
			p += 1;
		}
		i -= 1;
	}
}

void		down_tetrimino(t_data *data, t_all *all)
{
	int		i;
	int		t;

	data->end = 0;
	t = 0;
	i = count(data);
	t = time(NULL) - data->time_down;
	if (t == data->temp_down + 1)
	{
		data->temp_down += 1;
		if (verif_char_down(data) == 1)
		{
			data->end = 1;
			data->score += 10;
		}
		else
		move_down(data, i);
	}
}

void		down_tetrimino_fast(t_data *data, t_all *all)
{
	int		i;
	int		t;
	float	coef;

	data->end = 0;
	t = 0;
	coef = 20000;
	i = count(data);
	if (clock() / coef >= 1 + t / coef && (t = clock()))
	{
	if (verif_char_down(data) == 1)
	{
		data->end = 1;
		data->score += 10;
	}
	else
	move_down(data, i);
	}
}
