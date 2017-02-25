/*
** my.h for matchstick in /home/mohan/Projet/Elementary_Programming_in_C/CPE_2016_matchstick/include/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Wed Feb 15 10:41:45 2017 Mohan Grewis
** Last update Sat Feb 25 16:51:52 2017 Mohan Grewis
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef	struct	s_list
{
	char			*str;
	struct s_list	*next;
}				t_list;

typedef	struct	s_tetrimino
{
	char				**shape;
	char				*name;
	int					width;
	int					height;
	int					color;
	struct s_tetrimino	*next;
	struct s_tetrimino	*prev;
}				t_tetrimino;

int		my_printf(char *str, ...);
char	*get_next_line(const int fd);
t_tetrimino		*parsing_tetrimino(char *path);
