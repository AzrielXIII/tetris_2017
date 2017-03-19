/*
** identification_char.c for identification_char in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Sat Mar 18 15:11:42 2017 Thomas Dominé
** Last update Sun Mar 19 14:33:06 2017 Thomas Dominé
*/

#include "../include/my.h"

int			identification_char(char c)
{
	int		i;

	i = 0;
	if (c == 'R')
	i = 1;
	if (c == 'G')
	i = 2;
	if (c == 'Y')
	i = 3;
	if (c == 'B')
	i = 4;
	if (c == 'M')
	i = 5;
	if (c == 'C')
	i = 6;
	return (i);
}

int			identification_char_min(char c)
{
	int		i;

	i = 0;
	if (c == 'r')
	i = 1;
	if (c == 'g')
	i = 2;
	if (c == 'y')
	i = 3;
	if (c == 'b')
	i = 4;
	if (c == 'm')
	i = 5;
	if (c == 'c')
	i = 6;
	return (i);
}
