/*
** display.c for display in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Sat Feb 25 15:46:57 2017 Thomas Dominé
** Last update Wed Mar  8 15:20:08 2017 Thomas Dominé
*/

#include "../include/my.h"

void		exemple()
{
	int	i;
	int	a;

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
	int	i;

	initscr();
	curs_set(0);
	i = 0;
	while (i != 1)
	{
		keypad(stdscr, TRUE);
		i = 0;
		clear();
		refresh();
		if (getch() == 27)
		i = 1;
	}
	endwin();
}
