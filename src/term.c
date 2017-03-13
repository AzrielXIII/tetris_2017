/*
** term.c for tetris in /home/mohan/Projet/Unix_System_Programmation/PSU_2016_tetris/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Tue Mar  7 13:44:48 2017 Mohan Grewis
** Last update Mon Mar 13 16:21:00 2017 Mohan Grewis
*/

#include "../include/my.h"

int		space_counter(char *str)
{
	int	i;
	int	a;

	a = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			a += 1;
		i += 1;
	}
	return (a);
}

void 	print_term_key(char *key)
{
	if (key[0] == 27)
	my_printf("^E%s\n", key + 1);
	else
	my_printf("%s\n", key);
}

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
	return (0);
}

void 		setup_term(char **ae)
{
	int		i;
	char	*str;

	i = 0;
	while (ae[i] != NULL)
	{
		if (my_strcmp(ae[i], "TERM=") == 0)
			setupterm(ae[i] + 5, 1, NULL);
		i += 1;
	}
}
