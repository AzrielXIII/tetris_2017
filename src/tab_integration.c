/*
** tab_integration.c for tetris in /home/mohan/Projet/Unix_System_Programmation/PSU_2016_tetris/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Wed Mar 15 11:04:39 2017 Mohan Grewis
** Last update Wed Mar 15 11:16:30 2017 Mohan Grewis
*/

#include "../include/my.h"

char	**tab_integration(char **game_tab, char **tetrimino, int j, int i)
{
	int	a;
	int	b;
	int	i_cpy;

	a = 0;
	b = 0;
	while (tetrimino[a] != NULL)
	{
		i_cpy = i;
		if (game_tab[j] == NULL)
			return (NULL);
		while (tetrimino[a][b] != '\0')
		{
			if (game_tab[j][i_cpy] == '\0')
				return (NULL);
			game_tab[j][i_cpy] = tetrimino[a][b];
			b += 1;
			i_cpy += 1;
		}
		j += 1;
		b += 1;
	}
	return (game_tab);
}
