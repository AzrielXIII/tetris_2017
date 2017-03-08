/*
** score_tab.c for score_tab in /home/azriel/Epitech/PSU_2016_tetris/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Wed Mar  1 15:22:30 2017 Thomas Dominé
** Last update Wed Mar  8 15:33:30 2017 Thomas Dominé
*/

#include "../include/my.h"

void		score()
{
	color_init();
	print_x_to_x(10, 26, 10);
	print_x_to_x(10, 26, 17);
	print_y_to_y(10, 17, 10);
	print_y_to_y(10, 17, 26);
	mvprintw(11, 12, "Score: ");
}
