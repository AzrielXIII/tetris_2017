/*
** verif_screen.c for verif_screen in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Sat Mar 18 11:15:16 2017 Thomas Dominé
** Last update Sat Mar 18 11:24:54 2017 Thomas Dominé
*/

#include "../include/my.h"

void		verif_screen(t_data *data, t_all *all)
{
	if (LINES <= all->size_height + 2 || COLS <= 60)
	{
		clear();
		mvprintw(LINES / 2, COLS / 2 - 7, "Enlarge screen");
	}
}
