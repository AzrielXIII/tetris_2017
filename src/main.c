/*
** main.c for tetris in /home/mohan/Projet/Elementary_Programming_in_C/CPE_2016_matchstick/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Wed Feb 15 10:40:49 2017 Mohan Grewis
** Last update Sat Feb 25 17:18:04 2017 Mohan Grewis
*/

#include "../include/my.h"

int				main(int ac, char **av)
{
	t_tetrimino	*brick;
	int			i;

	i = 0;
	brick = parsing_tetrimino(av[1]);
	my_printf("%s\n", brick->name);
	while (brick->shape[i] != NULL)
	{
		my_printf("%s\n", brick->shape[i]);
		i += 1;
	}
}
