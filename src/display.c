/*
** display.c for display in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Sat Feb 25 15:46:57 2017 Thomas Dominé
** Last update Sat Feb 25 16:44:58 2017 Thomas Dominé
*/

#include "../include/my.h"

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
		mvprintw(LINES / 2, COLS / 2 - 8, "J'aime les pates");
		refresh();
		if (getch() == '\n')
		i = 1;
	}
	endwin();
}
