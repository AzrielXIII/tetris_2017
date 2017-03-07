/*
** main.c for tetris in /home/mohan/Projet/Elementary_Programming_in_C/CPE_2016_matchstick/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Wed Feb 15 10:40:49 2017 Mohan Grewis
** Last update Tue Mar  7 13:56:57 2017 Mohan Grewis
*/

#include "../include/my.h"

int				main(int ac, char **av)
{
	t_list		*tetrimino;
	t_all		*all;

	tetrimino = tetrimino_collector("tetriminos");
	all = set_default();
	debug(all, tetrimino);
}
