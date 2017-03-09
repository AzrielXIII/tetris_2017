/*
** display.c for display in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Sat Feb 25 15:46:57 2017 Thomas Dominé
** Last update Thu Mar  9 10:16:28 2017 Thomas Dominé
*/

#include "../include/my.h"

void		exemple()
{
	int		i;
	int		a;

	i = 0;
	a = 1;
	while (i < 30)
	{
		attron(COLOR_PAIR(a));
		printw("J'aime les pates");
		i += 1;
		if (a > 7)
		a = 1;
		else
		a += 1;
	}
}

void		display()
{
	int		i;
	t_data	*data;

	initscr();
	curs_set(0);
	i = 0;
	data = malloc(sizeof(t_data));
	while (i != 1)
	{
		keypad(stdscr, TRUE);
		i = 0;
		clear();
		score(data);
		refresh();
		if (getch() == '\n')
		i = 1;
	}
	endwin();
}
