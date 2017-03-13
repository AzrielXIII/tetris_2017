/*
** tetrimino.c for tetris in /home/mohan/Projet/Unix_System_Programmation/PSU_2016_tetris/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**[]
** Started on  Sat Mar 11 16:48:51 2017 Mohan Grewis
** Last update Mon Mar 13 16:44:54 2017 Mohan Grewis
*/

#include "../include/my.h"

char		**rotate_malloc(char **r, int width, int height)
{
	int		i;

	r = malloc(sizeof(char *) * (width + 1));
	i = 0;
	while (i < width)
	{
		r[i] = malloc(sizeof(char) * (height + 1));
		i += 1;
	}
	return (r);
}

char		**rotate_my_tetrimino(char **tetrimino, int width, int height)
{
	int		a;
	int		b;
	int		j;
	char	**r;

	r = rotate_malloc(r, width, height);
	a = 0;
	while (a < width)
	{
		j = height - 1;
		b = 0;
		while (b < height)
		{
			r[a][b] = tetrimino[j][a];
			b += 1;
			j -= 1;
		}
		r[a][b] = '\0';
		a += 1;
	}
	r[a] = NULL;
	return (r);
}

void	create_the_roation(t_tetrimino *brick)
{
	brick->current_shape = 0;
	brick->shape90 = rotate_my_tetrimino(brick->shape, brick->width,
		 brick->height);
	brick->shape180 = rotate_my_tetrimino(brick->shape90,
		 brick->height, brick->width);
	brick->shape270 = rotate_my_tetrimino(brick->shape180, brick->width,
		 brick->height);
}
