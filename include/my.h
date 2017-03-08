/*
** my.h for matchstick in /home/mohan/Projet/Elementary_Programming_in_C/CPE_2016_matchstick/include/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Wed Feb 15 10:41:45 2017 Mohan Grewis
** Last update Wed Mar  8 15:39:02 2017 Thomas Dominé
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
#include <term.h>

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
	int			my_key_left;
	int			my_key_right;
	int			key_turn;
	int			key_drop;
	int			key_quit;
	int			key_pause;
	int			enable_next;
	int			size_width;
	int			size_height;
	int			debug;
	int			help;
}				t_all;

typedef	struct	s_data
{
	char	**s_tab;
	int	score;
	char	**next;
}				t_data;

typedef struct	s_flags
{
	char			*flags;
	int				(*ptrfonct)(t_all *all, t_list *list, char **argv, int i);
}				t_flags;

t_all		*set_default();
int		my_strlen(char *str);
void 		setup_term(char **ae);
int		space_counter(char *str);
int		space_counter(char *str);
void 		print_term_key(char *key);
int		my_printf(char *str, ...);
char 		*str_extractor(char *str);
char		*name_collector(char *path);
char		*get_next_line(const int fd);
int		count_tetrimino(t_list *list);
t_tetrimino	*parsing_tetrimino(char *path);
t_list		*tetrimino_collector(char *path);
char		*str_extractor_malloc(char *str);
int		my_strcmp(char *str1, char *str2);
void		print_tetrimino_alpha(t_list *list);
int		debug(t_all *all, t_list *list, char **argv, int i);

int	help(t_all *all, t_list *list, char **argv, int i);
int	debug_set(t_all *all, t_list *list, char **argv, int i);
int	level_set_long(t_all *all, t_list *list, char **argv, int i);
int	level_set_short(t_all *all, t_list *list, char **argv, int i);
int	key_left_set_long(t_all *all, t_list *list, char **argv, int i);
int	key_turn_set_long(t_all *all, t_list *list, char **argv, int i);
int	key_drop_set_long(t_all *all, t_list *list, char **argv, int i);
int	key_right_set_long(t_all *all, t_list *list, char **argv, int i);
int	key_left_set_short(t_all *all, t_list *list, char **argv, int i);
int	key_drop_set_short(t_all *all, t_list *list, char **argv, int i);
int	key_turn_set_short(t_all *all, t_list *list, char **argv, int i);
int	key_right_set_short(t_all *all, t_list *list, char **argv, int i);

void display();
int color_init();
int my_get_nbr(char *str);
void print_x_to_x(int x1, int x2, int y);
void print_y_to_y(int y1, int y2, int x);
