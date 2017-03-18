/*
** down_tetrimino.c for down_tetrimino in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Sat Mar 18 13:57:14 2017 Thomas Dominé
** Last update Sat Mar 18 15:41:03 2017 Thomas Dominé
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
	int		stop;
	int		i;
	int		t;

	stop = 0;
	while (stop == 0)
	{
		i = count(data);
		t = time(NULL);
		if (getch() == 's')
		{
			if (verif_char_down(data) == 1)
			stop = 1;
			else
			move_down(data, i);
		}
		print_game(data, all);
	}
}
