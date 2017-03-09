/*
** score_tab.c for score_tab in /home/azriel/Epitech/PSU_2016_tetris/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Wed Mar  1 15:22:30 2017 Thomas Dominé
** Last update Thu Mar  9 10:24:20 2017 Thomas Dominé
*/

#include "../include/my.h"

void		score(t_data *data)
{
	WINDOW *boite;

	color_init();
	boite = subwin(stdscr, 5, 16, 4, 4);
	box(boite, ACS_VLINE, ACS_HLINE);
	mvprintw(5, 5, "Score: 0");
	mvprintw(7, 5, "Level: 1");
}
