/*
** main.c for tetris in /home/mohan/Projet/Elementary_Programming_in_C/CPE_2016_matchstick/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Wed Feb 15 10:40:49 2017 Mohan Grewis
** Last update Mon Feb 27 14:57:39 2017 Mohan Grewis
*/

#include "../include/my.h"

int				main(int ac, char **av)
{
	t_list		*list;
	int			i;

	list = tetrimino_collector("tetriminos");
	while (list != NULL)
	{
		i = 0;
		if (list->brick == NULL)
		{
			my_printf("%s : Error\n", list->name);
		}
		else
		{
			my_printf("%s\n", list->name);
			while (list->brick->shape[i] != NULL)
			{
				my_printf("%s\n", list->brick->shape[i]);
				i += 1;
			}
		}
		list = list->next;
	}
}
