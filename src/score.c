/*
** score_tab.c for score_tab in /home/azriel/Epitech/PSU_2016_tetris/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Wed Mar  1 15:22:30 2017 Thomas Dominé
** Last update Thu Mar  9 16:43:32 2017 Thomas Dominé
*/

#include "../include/my.h"

void		score(t_data *data)
{
	WINDOW *boite;
	color_init();
	attron(COLOR_PAIR(9));
	boite = subwin(stdscr, 5, 16, 4, 4);
	box(boite, ACS_VLINE, ACS_HLINE);
	attroff(COLOR_PAIR(9));
	mvprintw(5, 5, "Score: ");
	mvprintw(5, 12, "%i", data->score);
	mvprintw(7, 5, "Level: 1");
	if (getch() == KEY_UP && data->score < 999999)
		data->score += 1111;
	if (data->score > 999999)
		data->score = 999999;
	if (getch() == KEY_DOWN && data->score > 0)
		data->score -= 1111;
	if (data->score < 0)
		data->score = 0;
}
