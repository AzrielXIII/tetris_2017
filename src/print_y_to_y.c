/*
** print_y_to_y.c for peint_y_to_y in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Wed Mar  8 15:25:31 2017 Thomas Dominé
** Last update Wed Mar  8 16:37:53 2017 Thomas Dominé
*/

#include "../include/my.h"

void		print_y_to_y(int y1, int y2, int x)
{
	color_init();
	while (y1 < y2)
	{
		attron(COLOR_PAIR(7));
		mvprintw(y1, x, "#");
		y1 += 1;
	}
}
