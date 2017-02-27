/*
** my.h for matchstick in /home/mohan/Projet/Elementary_Programming_in_C/CPE_2016_matchstick/include/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Wed Feb 15 10:41:45 2017 Mohan Grewis
** Last update Mon Feb 27 15:19:04 2017 Mohan Grewis
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

typedef struct	s_flags
{
  char			*flags;
  void			(*ptrfonct)(va_list ap, int *rnb);
}				t_flags;

int			my_printf(char *str, ...);
char		*get_next_line(const int fd);
t_tetrimino	*parsing_tetrimino(char *path);
void 		display();
int			space_counter(char *str);
int			my_strlen(char *str);
t_list		*tetrimino_collector(char *path);
char		*name_collector(char *path);
