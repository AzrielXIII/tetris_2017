/*
** tetrimino2.c for tetris in /home/mohan/Projet/Unix_System_Programmation/PSU_2016_tetris/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Mon Mar 13 16:43:48 2017 Mohan Grewis
** Last update Mon Mar 13 16:47:14 2017 Mohan Grewis
*/

#include "../include/my.h"

int			count_tetriminov2(t_list *tetrimino)
{
	int		i;

	i = 0;
	while (tetrimino != NULL)
	{
		tetrimino = tetrimino->next;
		i += 1;
	}
	return (i);
}

t_tetrimino		*random_tetriminov2(t_list *tetrimino)
{
	int			i;

	i = (rand() % count_tetriminov2(tetrimino));
	while (i > 0)
	{
		tetrimino = tetrimino->next;
		i -= 1;
	}
	return (tetrimino->brick);
}

t_tetrimino		*random_tetrimino(t_list *tetrimino)
{
	t_tetrimino	*brick;

	while ((brick = random_tetriminov2(tetrimino)) == NULL);
	return (brick);
}
