/*
** tetrimino.c for tetris in /home/mohan/Projet/Unix_System_Programmation/PSU_2016_tetris/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Sat Mar 11 16:48:51 2017 Mohan Grewis
** Last update Mon Mar 13 09:33:18 2017 Mohan Grewis
*/

#include "../include/my.h"

char		**rotate_my_tetrimino(char **tetrimino, int width, int height)
{
	int		i;
	int		j;
	char	*r;

	r = malloc(sizeof(char *) * (width + 1));
	i = 0;
	while (i < width)
	{
		r[i] = malloc(sizeof(char) * (height + 1));
		i += 1;
	}
	j = 0;
	while (j < width)
	{
		i = 0;
		while (i < height)
		{
		}
	}
}
