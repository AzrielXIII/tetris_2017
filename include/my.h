/*
** my.h for matchstick in /home/mohan/Projet/Elementary_Programming_in_C/CPE_2016_matchstick/include/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Wed Feb 15 10:41:45 2017 Mohan Grewis
** Last update Wed Mar 15 11:18:57 2017 Mohan Grewis
*/

#include <time.h>
#include <term.h>
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
	int			current_shape;
	char		**shape;
	char		**shape90;
	char		**shape180;
	char		**shape270;
	int			width;
	int			height;
	int			color;
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
	char		*my_key_left;
	char		*my_key_right;
	char		*key_turn;
	char		*key_drop;
	char		*key_quit;
	char		*key_pause;
	int			enable_next;
	int			size_width;
	int			size_height;
	int			debug;
	int			help;
}				t_all;

typedef	struct	s_data
{
	char	**game;
	int		score;
	char	**next;
	int		time;
	int		min;
}				t_data;

typedef struct	s_flags
{
	char			*flags;
	int				(*ptrfonct)(t_all *all, t_list *list,
		 				char **argv, int i);
}				t_flags;

t_all		*set_default();
int			my_strlen(char *str);
void 		setup_term(char **ae);
int			space_counter(char *str);
int			space_counter(char *str);
void 		print_term_key(char *key);
int			my_printf(char *str, ...);
char 		*str_extractor(char *str);
char		*name_collector(char *path);
char		*get_next_line(const int fd);
int			count_tetrimino(t_list *list);
t_tetrimino	*parsing_tetrimino(char *path);
int			last_char_in_string(char *str);
t_list		*tetrimino_collector(char *path);
char		*str_extractor_malloc(char *str);
int			my_strcmp(char *str1, char *str2);
void		print_tetrimino_alpha(t_list *list);
void		print_tetrimino(t_tetrimino *brick);
char		*create_space(char *str, int width);
t_tetrimino	*random_tetrimino(t_list *tetrimino);
void		create_the_roation(t_tetrimino *brick);
void		print_tetrimino_alpha_2(t_list *list, char a);
int			debug(t_all *all, t_list *list, char **argv, int i);
char		**rotate_my_tetrimino(char **tetrimino, int width, int height);
char		**tab_integration(char **game_tab, char **tetrimino,
	 							int j, int i);

int			help(t_all *all, t_list *list, char **argv, int i);
int			set_next(t_all *all, t_list *list, char **argv, int i);
int			debug_set(t_all *all, t_list *list, char **argv, int i);
int			level_set_long(t_all *all, t_list *list, char **argv, int i);
int			level_set_short(t_all *all, t_list *list, char **argv, int i);
int			cols_and_rows_set(t_all *all, t_list *list, char **argv, int i);
int			key_left_set_long(t_all *all, t_list *list, char **argv, int i);
int			key_drop_set_long(t_all *all, t_list *list, char **argv, int i);
int			key_turn_set_long(t_all *all, t_list *list, char **argv, int i);
int			key_quit_set_long(t_all *all, t_list *list,
								char **argv, int i);
int			key_right_set_long(t_all *all, t_list *list,
								char **argv, int i);
int			key_pause_set_long(t_all *all, t_list *list,
								char **argv, int i);
int			key_left_set_short(t_all *all, t_list *list,
								char **argv, int i);
int			key_drop_set_short(t_all *all, t_list *list,
								char **argv, int i);
int			key_turn_set_short(t_all *all, t_list *list,
								char **argv, int i);
int			key_quit_set_short(t_all *all, t_list *list,
								char **argv, int i);
int			key_pause_set_short(t_all *all, t_list *list,
								char **argv, int i);
int			key_right_set_short(t_all *all, t_list *list,
								char **argv, int i);

void		color_init();
int			my_get_nbr_v3(char *str);
void		score(t_data *data, t_all *all);
void		print_x_to_x(int x1, int x2, int y);
void		print_y_to_y(int y1, int y2, int x);
void		display(t_all *all, t_list *tetrimino);
void		tab_game(t_data *data, t_all *all, t_list *tetrimino,
	 					t_tetrimino *tet);
