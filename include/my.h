/*
** my.h for matchstick in /home/mohan/Projet/Elementary_Programming_in_C/CPE_2016_matchstick/include/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Wed Feb 15 10:41:45 2017 Mohan Grewis
<<<<<<< HEAD
** Last update Sat Mar 18 15:23:50 2017 Thomas Dominé
=======
** Last update Sat Mar 18 15:04:55 2017 Mohan Grewis
>>>>>>> master
*/

#include <time.h>
#include <term.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <dirent.h>
#include <termios.h>
#include <ncurses.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
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
	int		time;
	int		min;
	int		score;
	char	**game;
	char	**next;
	int		end;
	int		time_down;
	int		temp_down;
	t_tetrimino	*next_tet;
	t_tetrimino	*current;
	t_list		*list;
}				t_data;

typedef struct	s_flags
{
	char			*flags;
	int				(*ptrfonct)(t_all *all, t_list *list,
		 				char **argv, int i);
}				t_flags;

void		wait_char();
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
void 		unset_read(struct termios *old);
t_list		*tetrimino_collector(char *path);
char		*str_extractor_malloc(char *str);
int			my_strcmp(char *str1, char *str2);
void		print_tetrimino_alpha(t_list *list);
void		print_tetrimino(t_tetrimino *brick);
char		*create_space(char *str, int width);
t_tetrimino	*random_tetrimino(t_list *tetrimino);
void		create_the_roation(t_tetrimino *brick);
void		print_tetrimino_alpha_2(t_list *list, char a);
void 		set_read(struct termios *old, struct termios *new);
int			debug(t_all *all, t_list *list, char **argv, int i);
char		**rotate_my_tetrimino(char **tetrimino, int width, int height);
char		**tab_integration(char **game_tab, char **tetrimino,
	 							int y, int x);

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
char		analys(char c);
int			select_color(char c);
int			my_get_nbr_v3(char *str);
int			identification_char(char c);
char		select_letter(int nb_color);
void		miniaturisation(t_data *data);
int			verif_char_down(t_data *data);
int			verif_char_left(t_data *data);
int			verif_char_right(t_data *data);
void		score(t_data *data, t_all *all);
void		tab_game(t_data *data, t_all *all);
void		init_tab(t_data *data, t_all *all);
void		move_left(t_data *data, t_all *all);
void		print_x_to_x(int x1, int x2, int y);
void		print_y_to_y(int y1, int y2, int x);
void		move_right(t_data *data, t_all *all);
void		print_game(t_data *data, t_all *all);
void		print_next(t_data *data, t_all *all);
void		verif_screen(t_data *data, t_all *all);
void		display(t_all *all, t_list *tetrimino);
void		memories_game(t_data *data, t_all *all);
void		next_tetrimino(t_data *data, t_all *all);
void		down_tetrimino(t_data *data, t_all *all);
void		tetrimino_coloration(t_data *data, t_tetrimino *tet);
