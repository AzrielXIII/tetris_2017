/*
** debug.c for tetris in /home/mohan/Projet/Unix_System_Programmation/PSU_2016_tetris/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Wed Mar  1 14:47:53 2017 Mohan Grewis
** Last update Mon Mar 13 16:16:08 2017 Mohan Grewis
*/

#include "../include/my.h"

t_list	*my_rewind(t_list *list)
{
	while (list->prev != NULL)
		list = list->prev;
	return (list);
}

void	print_tetrimino(t_tetrimino *brick)
{
	int	i;

	my_printf("Size %d*%d : ", brick->width, brick->height);
	my_printf("Color %d :\n", brick->color);
	i = 0;
	while (brick->shape[i] != NULL)
	{
		write(1, brick->shape[i], last_char_in_string(brick->shape[i]) + 1);
		write(1, "\n", 1);
		i += 1;
	}
}

void		print_tetrimino_alpha(t_list *list)
{
	char	a;

	a = 0;
	while (a < 127)
	{
		while (list->next != NULL)
		{
			if (list->name[0] == a)
			{
				my_printf("Tetriminos : Name %s : ", list->name);
				if (list->brick != NULL)
					print_tetrimino(list->brick);
				else
					my_printf("Error\n");
			}
			list = list->next;
		}
		print_tetrimino_alpha_2(list, a);
		list = my_rewind(list);
		a += 1;
	}
}

int		debug(t_all *all, t_list *list, char **argv, int i)
{
	my_printf("*** DEBUG MODE ***\n");
	my_printf("Key Left : ");
	print_term_key(all->my_key_left);
	my_printf("Key Right : ");
	print_term_key(all->my_key_right);
	my_printf("Key Turn : ");
	print_term_key(all->key_turn);
	my_printf("Key Drop : ");
	print_term_key(all->key_drop);
	my_printf("Key Quit : ");
	print_term_key(all->key_quit);
	my_printf("Key Pause : ");
	print_term_key(all->key_pause);
	if (all->enable_next == 1)
		my_printf("Next : Yes\n");
	else
		my_printf("Next : No\n");
	my_printf("Level : %d\n", all->level);
	my_printf("Size : %d*%d\n", all->size_width, all->size_height);
	my_printf("Tetriminos : %d\n", count_tetrimino(list));
	print_tetrimino_alpha(list);
	return (i);
}
