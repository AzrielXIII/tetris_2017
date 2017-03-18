/*
** parsing3.c for tetris in /home/mohan/Projet/Unix_System_Programmation/PSU_2016_tetris/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Mon Mar 13 09:33:31 2017 Mohan Grewis
** Last update Mon Mar 13 10:49:37 2017 Mohan Grewis
*/

#include "../include/my.h"

char		*create_space(char *str, int width)
{
	char	*r;
	int		i;

	i = 0;
	r = malloc(sizeof(char) * (width + 1));
	while (i < width)
	{
		if (i >= my_strlen(str))
			r[i] = ' ';
		else
			r[i] = str[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}

char		*name_collector(char *path)
{
	int		i;
	char	*name;

	i = 0;
	while (path[i] == '.')
		i += 1;
	name = malloc(sizeof(char) * (i + 2));
	i = 0;
	while (path[i] != '.')
	{
		name[i] = path[i];
		i += 1;
	}
	name[i] = '\0';
	return (name);
}
