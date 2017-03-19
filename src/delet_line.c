/*
** delete_line.c for delete_line in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Sat Mar 18 22:04:36 2017 Thomas Dominé
** Last update Sun Mar 19 18:48:16 2017 Thomas Dominé
*/

#include "../include/my.h"

int			verif_line_complete(char *str)
{
	int		i;
	int		bol;

	i = 0;
	bol = 0;
	while (str[i] != '\0')
	{
		i += 1;
		if (str[i] == ' ')
		bol = 1;
	}
	return (bol);
}

char		*my_str_cpy(char *str)
{
	int		i;
	char	*tmp;

	i = 0;
	while (str[i] != '\0')
	i += 1;
	tmp = malloc(sizeof(char) * i);
	i = 0;
	while (str[i] != '\0')
	{
		tmp[i] = str[i];
		i += 1;
	}
	return (tmp);
}

char		*str_space(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = ' ';
		i += 1;
	}
	return (str);
}

void		delet_line(t_data *data)
{
	int		i;
	int		mem;
	int		p;

	i = 0;
	while (data->game[i] != NULL)
	{
		mem = i;
		if (verif_line_complete(data->game[i]) == 0)
		{
			data->score += 100;
			while (i > 1)
			{
				p = 0;
				while (data->game[i][p] != '\0')
				{
					data->game[i][p] = data->game[i - 1][p];
					p += 1;
				}
				i -= 1;
			}
			i = mem;
		}
		i += 1;
	}
}
