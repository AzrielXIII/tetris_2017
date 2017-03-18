/*
** next_tetrimino.c for next_tetrimino in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Fri Mar 17 17:10:02 2017 Thomas Dominé
** Last update Sat Mar 18 20:36:35 2017 Thomas Dominé
*/

#include "../include/my.h"

void		next_tetrimino(t_data *data, t_all *all)
{
	while (data->next_tet == data->current)
	data->next_tet = random_tetrimino(data->list);
}
