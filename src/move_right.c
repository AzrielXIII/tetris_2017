/*
** move_right.c for move_right in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Sat Mar 18 21:56:59 2017 Thomas Dominé
** Last update Sun Mar 19 10:43:07 2017 Mohan Grewis
*/

#include "../include/my.h"

int			init_p(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	i += 1;
	return (i);
}

void		move_right(t_data *data, t_all *all)
{
	int		i;
	int		p;

	i = 0;
	if (verif_char_right(data) == 0)
	{
		while (data->game[i] != NULL)
		{
			p = init_p(data->game[i]);
			while (p >= 0)
			{
				if (identification_char(data->game[i][p]))
				{
					data->game[i][p + 1] = data->game[i][p];
					data->game[i][p] = ' ';
				}
				p -= 1;
			}
			i += 1;
		}
	}
}
