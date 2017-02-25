/*
** my_get_nbr.c for my_get_nbr in /home/azriel/Epitech/CPE_2016_Pushswap/tableau/
**
** Made by Thomas Dominé
** Login   <thomas.domine-@epitech.eu>
**
** Started on  Fri Nov 25 15:59:39 2016 Thomas Dominé
** Last update Wed Feb 15 17:57:04 2017 Thomas Dominé
*/

#include "mylib.h"

int		my_get_nbr(char *str)
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
