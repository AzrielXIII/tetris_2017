/*
** print_x_to_x.c for print_x_to_x.c in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Wed Mar  8 15:12:29 2017 Thomas Dominé
** Last update Wed Mar  8 17:20:52 2017 Thomas Dominé
*/

#include "../include/my.h"

void		print_x_to_x(int x1, int x2, int y)
{
	color_init();
	while (x1 < x2)
	{
		attron(COLOR_PAIR(7));
		mvprintw(y, x1, "#");
		x1 += 1;
	}
}
