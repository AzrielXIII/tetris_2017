/*
** my.h for matchstick in /home/mohan/Projet/Elementary_Programming_in_C/CPE_2016_matchstick/include/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Wed Feb 15 10:41:45 2017 Mohan Grewis
** Last update Wed Mar  1 16:06:45 2017 Thomas Dominé
*/

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <dirent.h>
#include <ncurses.h>
#include <sys/stat.h>
#include <sys/types.h>

typedef	struct	s_tetrimino
{
	char				**shape;
	int					width;
	int					height;
	int					color;
}				t_tetrimino;

typedef	struct	s_list
{
	char			*name;
	t_tetrimino		*brick;
	struct s_list	*next;
	struct s_list	*prev;
}				t_list;

typedef struct	s_all
{
	int			level;
	int			key_left;
	int			key_right;
	int			key_turn;
	int			key_drop;
	int			key_quit;
	int			key_pause;
	int			enable_next;
	int			size_width;
	int			size_height;
}				t_all;

typedef	struct	s_data
{
	char	**s_tab;
	int	score;
	char	**next;
}		t_data;

typedef struct	s_flags
{
	char			*flags;
	void			(*ptrfonct)(t_all all, t_list list, char **argv, int i);
}				t_flags;

void display();
int my_strlen(char *str);
int space_counter(char *str);
int my_printf(char *str, ...);
char *name_collector(char *path);
char *get_next_line(const int fd);
t_list *tetrimino_collector(char *path);
t_tetrimino *parsing_tetrimino(char *path);
