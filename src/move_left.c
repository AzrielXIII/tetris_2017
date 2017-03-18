/*
** move_left.c for move_left.c in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Sat Mar 18 21:38:18 2017 Thomas Dominé
** Last update Sat Mar 18 21:46:32 2017 Thomas Dominé
*/

#include "../include/my.h"

void		move_left(t_data *data, t_all *all)
{
	int		i;
	int		p;

	i = 0;
	if (verif_char_left(data) == 0 && getch() == 'a')
	{
		while (data->game[i] != NULL)
		{
			p = 0;
			while (data->game[i][p] != '\0')
			{
				if (identification_char(data->game[i][p]))
				{
					data->game[i][p - 1] = data->game[i][p];
					data->game[i][p] = ' ';
				}
				p += 1;
			}
			i += 1;
		}
	}
}
