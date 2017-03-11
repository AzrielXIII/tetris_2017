/*
** params.c for tetris in /home/mohan/Projet/Unix_System_Programmation/PSU_2016_tetris/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Tue Mar  7 15:17:18 2017 Mohan Grewis
** Last update Thu Mar  9 10:24:32 2017 Mohan Grewis
*/

#include "../include/my.h"

char 		*str_extractor(char *str)
{
	char	*r;
	int		i;
	int		j;

	r = str_extractor_malloc(str);
	i = 0;
	j = -1;
	while (str[i] != '\0')
	{
		if (j > -1)
		{
			r[j] = str[i];
			j = j + 1;
		}
		if (str[i] == '=')
			j = 0;
		i += 1;
	}
	r[j] = '\0';
	return (r);
}

static int	my_get_nbr(char *str)
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (str[i] != '\0')
	{
		nb *= 10;
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		nb += str[i] - '0';
		i += 1;
	}
	return (nb);
}

int		help(t_all *all, t_list *list, char **argv, int i)
{
	all->help = 1;
	my_printf("Usage:  %s [options]\n", argv[0]);
	my_printf("Options:\n");
	my_printf("  --help                Display this help\n");
	my_printf("  -l --level={num}      Start Tetris at level num (def: 1)\n");
	my_printf("  -kl --key-left={K}    Move the tetrimino LEFT using the K ");
	my_printf("key (def: left arrow)\n");
	my_printf("  -kr --key-right={K}   Move the tetrimino RIGHT using the ");
	my_printf("K key (def: right arrow)\n");
	my_printf("  -kt --key-turn={K}    TURN the tetrimino clockwise 90d us");
	my_printf("ing the K key (def: top arrow)\n");
	my_printf("  -kd --key-drop={K}    DROP the tetrmino using the K key");
	my_printf(" (def: down arrow)\n");
	my_printf("  -kq --key-quit={K}    QUIT the game using the K key ");
	my_printf("(def: 'q' key)\n");
	my_printf("  -kp --key-pause={K}   PAUSE/RESTART the game using the K ");
	my_printf("(def: space bar)\n");
	my_printf("  --map-size={row,col}  Set the numbers of rows and columns ");
	my_printf("of the map (def: 2O,10)\n");
	my_printf("  -w --without-next     Hide next tetrimino (def: false)\n");
	my_printf("  -d --debug            Debug mode (def: false)\n");
	return (i);
}

int		level_set_short(t_all *all, t_list *list, char **argv, int i)
{
	int	nb;

	nb = 0;
	i = i + 1;
	if ((nb = my_get_nbr(argv[i])) == -1)
	{
		if (all->help == 0)
			help(all, list, argv, i);
		exit(84);
	}
	all->level = nb;
	return (i);
}

int		level_set_long(t_all *all, t_list *list, char **argv, int i)
{
	int	nb;

	nb = 0;
	if ((nb = my_get_nbr(str_extractor(argv[i]))) == -1)
	{
		if (all->help == 0)
			help(all, list, argv, i);
		exit(84);
	}
	all->level = nb;
	return (i);
}
