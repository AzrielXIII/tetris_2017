/*
** delete_line.c for delete_line in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Sat Mar 18 22:04:36 2017 Thomas Dominé
** Last update Sat Mar 18 22:22:13 2017 Thomas Dominé
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

void		copy_line(t_data *data, int i)
{
	while (i < 0)
	{
		data->game[i] = my_str_cpy(data->game[i - 1]);
		i -= 1;
	}
}

void		delet_line(t_data *data)
{
	int		i;

	i = 0;
	while (data->game[i] != NULL)
	{
		if (verif_line_complete(data->game[i]) == 0)
		copy_line(data, i);
		i += 1;
	}
}
