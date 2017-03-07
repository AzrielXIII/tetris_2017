/*
** term.c for tetris in /home/mohan/Projet/Unix_System_Programmation/PSU_2016_tetris/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Tue Mar  7 13:44:48 2017 Mohan Grewis
** Last update Tue Mar  7 13:50:41 2017 Mohan Grewis
*/

#include "../include/my.h"

int		my_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (-1);
		i += 1;
	}
	if (str1[i] == '\0' && str2[i] == '\0')
		return (0);
	return (-1);
}

void 	setup_term(char **ae)
{

}
