/*
** main.c for tetris in /home/mohan/Projet/Elementary_Programming_in_C/CPE_2016_matchstick/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Wed Feb 15 10:40:49 2017 Mohan Grewis
** Last update Wed Mar  8 11:47:55 2017 Mohan Grewis
*/

#include "../include/my.h"

t_flags		my_flags[] = {
	{"--help", help},
	{"--debug", debug_set},
	{"-d", debug_set},
	{"--level", level_set_long},
	{"-l", level_set_short},
	{"-kl", key_left_set_short},
	{"--key-left", key_left_set_long},
	{"-kr", key_right_set_short},
	{"--key-right", key_right_set_long},
	{"-kd", key_drop_set_short},
	{"--key-drop", key_drop_set_long},
	{NULL, NULL}
};

void 	flags_handler(char **av, int ac, t_all *all, t_list *tetrimino)
{
	int	i;
	int	j;

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (my_flags[j].flags != NULL)
		{
			if (my_strcmp(my_flags[j].flags, av[i]) == 0)
				i = my_flags[j].ptrfonct(all, tetrimino, av, i);
			j = j + 1;
		}
		i += 1;
	}
}

int				main(int ac, char **av, char **ae)
{
	t_list		*tetrimino;
	t_all		*all;

	setup_term(ae);
	tetrimino = tetrimino_collector("tetriminos");
	all = set_default();
	flags_handler(av, ac, all, tetrimino);
	if (all->debug == 1)
		debug(all, tetrimino, av, 0);
}
