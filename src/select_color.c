/*
** select_color.c for select_color in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Fri Mar 17 18:12:10 2017 Thomas Dominé
** Last update Fri Mar 17 18:12:52 2017 Thomas Dominé
*/

#include "../include/my.h"

int			select_color(char c)
{
	int		i;

	i = 0;
	if (c == 'R' || c == 'r')
	i = 1;
	if (c == 'G' || c == 'g')
	i = 2;
	if (c == 'Y' || c == 'y')
	i = 3;
	if (c == 'B' || c == 'b')
	i = 4;
	if (c == 'M' || c == 'm')
	i = 5;
	if (c == 'C' || c == 'c')
	i = 6;
	return (i);
}
