/*
** display.c for display in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Sat Feb 25 15:46:57 2017 Thomas Dominé
** Last update Wed Mar  1 17:22:31 2017 Thomas Dominé
*/

#include "../include/my.h"

void		init()
{
	initscr();
	start_color();
	init_pair(1, COLOR_RED, COLOR_RED);
	init_pair(2, COLOR_GREEN, COLOR_GREEN);
	init_pair(3, COLOR_YELLOW, COLOR_YELLOW);
	init_pair(4, COLOR_BLUE, COLOR_BLUE);
	init_pair(5, COLOR_MAGENTA, COLOR_MAGENTA);
	init_pair(6, COLOR_CYAN, COLOR_CYAN);
	init_pair(7, COLOR_WHITE, COLOR_WHITE);
}

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
	init();
	while (i != 1)
	{
		keypad(stdscr, TRUE);
		i = 0;
		clear();
		exemple();
		refresh();
		if (getch() == '\n')
		i = 1;
	}
	endwin();
}
