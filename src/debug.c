/*
** debug.c for tetris in /home/mohan/Projet/Unix_System_Programmation/PSU_2016_tetris/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Wed Mar  1 14:47:53 2017 Mohan Grewis
** Last update Tue Mar  7 16:21:17 2017 Mohan Grewis
*/

#include "../include/my.h"

void	print_key(int key)
{
	if (key >= 0 && key <= 255 && key != ' ')
	my_printf("%c\n", key);
	else if (key == ' ')
	my_printf("(space)\n");
	else if (key == KEY_LEFT)
	print_term_key(tigetstr("kcub1"));
	else if (key == KEY_RIGHT)
	print_term_key(tigetstr("kcuf1"));
	else if (key == KEY_UP)
	print_term_key(tigetstr("kcuu1"));
	else if (key == KEY_DOWN)
	print_term_key(tigetstr("kcud1"));
	else
	my_printf("UNKWNOW\n");
}

t_list	*my_rewind(t_list *list)
{
	while (list->prev != NULL)
		list = list->prev;
	return (list);
}

void	print_tetrimino(t_tetrimino *brick)
{
	int	i;

	i = 0;
	my_printf("Size %d*%d : ", brick->width, brick->height);
	my_printf("Color %d :\n", brick->color);
	while (brick->shape[i] != NULL)
	{
		my_printf("%s\n", brick->shape[i]);
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
			list = list->next;
			if (list->name[0] == a)
			{
				my_printf("Tetriminos : Name %s : ", list->name);
				if (list->brick != NULL)
					print_tetrimino(list->brick);
				else
					my_printf("Error\n");
			}
		}
		list = my_rewind(list);
		a += 1;
	}

}

int		debug(t_all *all, t_list *list, char **argv, int i)
{
	my_printf("*** DEBUG MODE ***\n");
	my_printf("Key Left : ");
	print_key(all->my_key_left);
	my_printf("Key Right : ");
	print_key(all->my_key_right);
	my_printf("Key Turn : ");
	print_key(all->key_turn);
	my_printf("Key Drop : ");
	print_key(all->key_drop);
	my_printf("Key Quit : ");
	print_key(all->key_quit);
	my_printf("Key Pause : ");
	print_key(all->key_pause);
	if (all->enable_next == 1)
		my_printf("Next : Yes\n");
	else
		my_printf("Next : No\n");
	my_printf("Level : %d\n", all->level);
	my_printf("Size : %d*%d\n", all->size_height, all->size_width);
	my_printf("Tetriminos : %d\n", count_tetrimino(list));
	print_tetrimino_alpha(list);
	return (i);
}
