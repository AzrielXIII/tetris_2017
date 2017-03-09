/*
** init_color.c for init_color in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Wed Mar  8 15:04:26 2017 Thomas Dominé
** Last update Wed Mar  8 16:35:57 2017 Thomas Dominé
*/

#include "../include/my.h"

void		color_init()
{
	initscr();
	start_color();
	init_pair(0, COLOR_BLACK, COLOR_BLACK);
	init_pair(1, COLOR_RED, COLOR_RED);
	init_pair(2, COLOR_GREEN, COLOR_GREEN);
	init_pair(3, COLOR_YELLOW, COLOR_YELLOW);
	init_pair(4, COLOR_BLUE, COLOR_BLUE);
	init_pair(5, COLOR_MAGENTA, COLOR_MAGENTA);
	init_pair(6, COLOR_CYAN, COLOR_CYAN);
	init_pair(7, COLOR_WHITE, COLOR_WHITE);
	init_pair(8, COLOR_WHITE, COLOR_BLACK);
}
