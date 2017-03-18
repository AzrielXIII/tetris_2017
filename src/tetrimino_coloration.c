/*
** tetrimino_coloration.c for tetrimino_coloration in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Fri Mar 17 11:35:36 2017 Thomas Dominé
** Last update Fri Mar 17 17:30:44 2017 Thomas Dominé
*/

#include "../include/my.h"

void			tetrimino_coloration(t_data *data, t_tetrimino *tet)
{
	int			i;
	int			p;

	i = 0;
	while (data->game[i] != NULL)
	{
		p = 0;
		while (data->game[i][p] != '\0')
		{
			if (data->game[i][p] == '*' && select_letter(tet->color) != '\0')
			data->game[i][p] = select_letter(tet->color);
			p += 1;
		}
		i += 1;
	}
}
