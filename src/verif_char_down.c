/*
** verif_char.c for verif_char in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Sat Mar 18 14:36:14 2017 Thomas Dominé
** Last update Sat Mar 18 15:15:09 2017 Thomas Dominé
*/

#include "../include/my.h"

int			verif_next_char_down(int	i, int	p, t_data *data)
{
	int		tem;

	tem = 0;
	if (select_color(data->game[i + 1][p] == 'r'))
	tem = 1;
	if (select_color(data->game[i + 1][p] == 'g'))
	tem = 1;
	if (select_color(data->game[i + 1][p] == 'y'))
	tem = 1;
	if (select_color(data->game[i + 1][p] == 'b'))
	tem = 1;
	if (select_color(data->game[i + 1][p] == 'm'))
	tem = 1;
	if (select_color(data->game[i + 1][p] == 'c'))
	tem = 1;
	if (select_color(data->game[i + 1][p] == 'r'))
	tem = 1;
	if (data->game[i + 1] == NULL)
	tem = 1;
	return (tem);
}

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
			if (identification_char(data->game[i][p]) != 0 &&
			verif_next_char_down(i, p, data) == 1)
			temp = 1;
			p += 1;
		}
		i += 1;
	}
	return (temp);
}
