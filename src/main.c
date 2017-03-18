/*
** main.c for tetris in /home/mohan/Projet/Elementary_Programming_in_C/CPE_2016_matchstick/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Wed Feb 15 10:40:49 2017 Mohan Grewis
** Last update Sat Mar 18 15:37:35 2017 Mohan Grewis
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
	{"-kt", key_turn_set_short},
	{"--key-turn", key_turn_set_long},
	{"-kq", key_quit_set_short},
	{"--key-quit", key_quit_set_long},
	{"-kp", key_pause_set_short},
	{"--key-pause", key_pause_set_long},
	{"--map-size=", cols_and_rows_set},
	{"-w", set_next},
	{"--without-next", set_next},
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

int					main(int ac, char **av, char **ae)
{
	t_list			*tetrimino;
	t_all			*all;

	srand(time(NULL));
	setup_term(ae);
	tetrimino = tetrimino_collector("tetriminos");
	all = set_default();
	flags_handler(av, ac, all, tetrimino);
	if (all->debug == 1)
		debug(all, tetrimino, av, 0);
	display(all, tetrimino);
}
