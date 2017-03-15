/*
** tab_integration.c for tetris in /home/mohan/Projet/Unix_System_Programmation/PSU_2016_tetris/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Wed Mar 15 11:04:39 2017 Mohan Grewis
** Last update Wed Mar 15 11:21:46 2017 Mohan Grewis
*/

#include "../include/my.h"

char	**tab_integration(char **game_tab, char **tetrimino, int y, int x)
{
	int	a;
	int	b;
	int	x_cpy;

	a = 0;
	b = 0;
	while (tetrimino[a] != NULL)
	{
		x_cpy = x;
		if (game_tab[y] == NULL)
			return (NULL);
		while (tetrimino[a][b] != '\0')
		{
			if (game_tab[y][x_cpy] == '\0')
				return (NULL);
			game_tab[y][x_cpy] = tetrimino[a][b];
			b += 1;
			x_cpy += 1;
		}
		y += 1;
		b += 1;
	}
	return (game_tab);
}
