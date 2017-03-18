/*
** miniaturisation.c for miniaturisation in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Sat Mar 18 20:45:36 2017 Thomas Dominé
** Last update Sat Mar 18 20:55:45 2017 Thomas Dominé
*/

#include "../include/my.h"

void		miniaturisation(t_data *data)
{
	int		i;
	int		p;

	i = 0;
	while (data->game[i] != NULL)
	{
		p = 0;
		while (data->game[i][p] != '\0')
		{
			if (data->game[i][p] == 'R' || data->game[i][p] == 'G'
			 || data->game[i][p] == 'Y' || data->game[i][p] == 'B'
			 || data->game[i][p] == 'M' || data->game[i][p] == 'C')
			 data->game[i][p] += 32;
			p += 1;
		}
		i += 1;
	}
}
