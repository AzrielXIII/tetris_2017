/*
** score_tab.c for score_tab in /home/azriel/Epitech/PSU_2016_tetris/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Wed Mar  1 15:22:30 2017 Thomas Dominé
** Last update Mon Mar 13 11:21:52 2017 Thomas Dominé
*/

#include "../include/my.h"

void		print_sec(int	sec, t_data *data)
{
	if (sec < 60)
	{
		if (sec < 10)
		{
			mvprintw(9, 15, "0");
			mvprintw(9, 16, "%i", sec);
		}
		else
		mvprintw(9, 15, "%i", sec);
	}
	else
	{
		data->time = time(NULL);
		data->min += 1;
	}
}

void		timer(t_data *data)
{
	int		sec;

	sec = time(NULL) - data->time;
	mvprintw(9, 5, "Time: ");
	if (data->min < 10)
	{
		mvprintw(9, 12, "0");
		mvprintw(9, 13, "%i", data->min);
	}
	else
	mvprintw(9, 12, "%i", data->min);
	mvprintw(9, 14, ": ");
	print_sec(sec, data);
}

void		score(t_data *data, t_all *all)
{
	WINDOW *boite;
	color_init();
	attron(COLOR_PAIR(9));
	boite = subwin(stdscr, 7, 16, 4, 4);
	box(boite, ACS_VLINE, ACS_HLINE);
	attroff(COLOR_PAIR(9));
	mvprintw(5, 5, "Score: ");
	mvprintw(5, 12, "%i", data->score);
	mvprintw(7, 5, "Level: ");
	mvprintw(7, 12, "%i", all->level);
	timer(data);
}
