/*
** move_left.c for move_left.c in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Thu Mar 16 17:51:14 2017 Thomas Dominé
** Last update Thu Mar 16 18:10:41 2017 Thomas Dominé
*/

#include "../include/my.h"

void		move_left(t_data *data, t_all *all)
{
	int		i;
	int		p;
	char	c;

	i = 0;
	if (getch() == 'q')
	{
		while (data->game[i] != NULL)
		{
			p = 0;
			while (data->game[i][p] != '\0')
			{
				c = analys(data->game[i][p]);
				if (c != '\0')
				{
				}
				p += 1;
			}
			i += 1;
		}
	}
}
