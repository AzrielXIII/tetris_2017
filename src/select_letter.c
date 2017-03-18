/*
** select_letter.c for select_letter in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Fri Mar 17 17:25:14 2017 Thomas Dominé
** Last update Fri Mar 17 17:25:30 2017 Thomas Dominé
*/

#include "../include/my.h"

char			select_letter(int nb_color)
{
	if (nb_color == 1)
	return ('R');
	if (nb_color == 2)
	return ('G');
	if (nb_color == 3)
	return ('Y');
	if (nb_color == 4)
	return ('B');
	if (nb_color == 5)
	return ('M');
	if (nb_color == 6)
	return ('C');
	return ('\0');
}
