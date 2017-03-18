/*
** score_tab.c for score_tab in /home/azriel/Epitech/PSU_2016_tetris/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Wed Mar  1 15:22:30 2017 Thomas Dominé
** Last update Sat Mar 18 10:59:28 2017 Thomas Dominé
*/

#include "../include/my.h"

void		print_sec(int	sec, t_data *data, t_all *all)
{
	if (sec < 60)
	{
		if (sec < 10)
		{
			mvprintw((LINES / 2 - (all->size_height / 2 - 4)),
				COLS / 2 - (all->size_width + 17) + 10, "0");
			mvprintw((LINES / 2 - (all->size_height / 2 - 4)),
				COLS / 2 - (all->size_width + 17) + 11, "%i", sec);
		}
		else
		mvprintw((LINES / 2 - (all->size_height / 2 - 4)),
			COLS / 2 - (all->size_width + 17) + 10, "%i", sec);
	}
	else
	{
		data->time = time(NULL);
		data->min += 1;
	}
}

void		timer(t_data *data, t_all *all)
{
	int		sec;

	sec = time(NULL) - data->time;
	mvprintw((LINES / 2 - (all->size_height / 2 - 4)),
	COLS / 2 - (all->size_width + 17), "Time: ");
	if (data->min < 10)
	{
		mvprintw((LINES / 2 - (all->size_height / 2 - 4)),
			COLS / 2 - (all->size_width + 17) + 7, "0");
		mvprintw((LINES / 2 - (all->size_height / 2 - 4)),
			COLS / 2 - (all->size_width + 17) + 8, "%i", data->min);
	}
	else
	mvprintw((LINES / 2 - (all->size_height / 2 - 4)),
		COLS / 2 - (all->size_width + 17) + 7, "%i", data->min);
	mvprintw((LINES / 2 - (all->size_height / 2 - 4)),
		COLS / 2 - (all->size_width + 17) + 9, ": ");
	print_sec(sec, data, all);
}

void		score(t_data *data, t_all *all)
{
	WINDOW *boite;
	color_init();
	attron(COLOR_PAIR(12));
	boite = subwin(stdscr, 7, 16, LINES / 2 - (all->size_height / 2 + 1),
		COLS / 2 - (all->size_width + 18));
	box(boite, ACS_VLINE, ACS_HLINE);
	attroff(COLOR_PAIR(12));
	mvprintw(LINES / 2 - (all->size_height / 2),
	COLS / 2 - (all->size_width + 17), "Score: ");
	mvprintw(LINES / 2 - (all->size_height / 2),
	COLS / 2 - (all->size_width + 17) + 7, "%i", data->score);
	mvprintw(LINES / 2 - (all->size_height / 2 - 2),
	COLS / 2 - (all->size_width + 17), "Level: ");
	mvprintw(LINES / 2 - (all->size_height / 2 - 2),
	COLS / 2 - (all->size_width + 17) + 7, "%i", all->level);
	timer(data, all);
}
