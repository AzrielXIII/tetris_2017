/*
** my_get_nbr.c for my_get_nbr in /home/azriel/Epitech/PSU_2016_tetris/src/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Wed Mar  8 15:33:44 2017 Thomas Dominé
** Last update Wed Mar  8 15:48:36 2017 Mohan Grewis
*/

#include "../include/my.h"

int		my_get_nbr_v3(char *str)
{
	int	i;
	int 	nb;
	int 	b;

	b = 1;
	i = 0;
	nb = 0;
	if (str[0] == '-')
	{
		i += 1;
		b = -1;
	}
	while (str[i] != '\0')
	{
		nb = nb * 10;
		nb = nb + (str[i] - 48);
		i += 1;
	}
	return (nb * b);
}
