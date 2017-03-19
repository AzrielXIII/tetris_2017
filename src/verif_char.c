/*
** verif_char.c for verif_char in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Sat Mar 18 14:36:14 2017 Thomas Dominé
** Last update Sun Mar 19 14:34:44 2017 Thomas Dominé
*/

#include "../include/my.h"

int			verif_char_down(t_data *data)
{
	int		i;
	int		p;
	int		temp;

	i = 0;
	temp = 0;
	while (data->game[i] != NULL)
	{
		p = 0;
		while (data->game[i][p] != '\0')
		{
			if (identification_char(data->game[i][p]))
			{
				if (data->game[i + 1] == NULL || data->game[i + 1][p] == 'r' ||
				data->game[i + 1][p] == 'g' || data->game[i + 1][p] == 'y'
				|| data->game[i + 1][p] == 'b' || data->game[i + 1][p] == 'm'
				|| data->game[i + 1][p] == 'c')
				temp = 1;
			}
			p += 1;
		}
		i += 1;
	}
	return (temp);
}

int			verif_char_left(t_data *data)
{
	int		i;
	int		p;

	i = 0;
	while (data->game[i] != NULL)
	{
		p = 0;
		while (data->game[i][p] != '\0')
		{
			if (identification_char(data->game[i][p]))
			{
				if (p == 0 || data->game[i][p - 1] == 'r' ||
				data->game[i][p - 1] == 'g' || data->game[i][p - 1] == 'y'
				|| data->game[i][p - 1] == 'b' || data->game[i][p - 1] == 'm'
				|| data->game[i][p - 1] == 'c')
				return (1);
			}
			p += 1;
		}
		i += 1;
	}
	return (0);
}

int			verif_char_right(t_data *data)
{
	int		i;
	int		p;

	i = 0;
	while (data->game[i] != NULL)
	{
		p = 0;
		while (data->game[i][p] != '\0')
		{
			if (identification_char(data->game[i][p]))
			{
				if (data->game[i][p + 1] == '\0' ||
				data->game[i][p + 1] == 'r' ||
				data->game[i][p + 1] == 'g' || data->game[i][p + 1] == 'y'
				|| data->game[i][p + 1] == 'b' || data->game[i][p + 1] == 'm'
				|| data->game[i][p + 1] == 'c')
				return (1);
			}
			p += 1;
		}
		i += 1;
	}
	return (0);
}

int			verif_char_loose(t_data *data)
{
	int		i;

	i = 0;
	while (data->game[0][i] != '\0')
	{
		if (identification_char_min(data->game[0][i]) != 0)
		return (1);
		i += 1;
	}
	return (0);
}
