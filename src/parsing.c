/*
** parsing.c for tetris in /home/mohan/Projet/Unix_System_Programmation/PSU_2016_tetris/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Sat Feb 25 15:44:19 2017 Mohan Grewis
** Last update Mon Feb 27 14:39:25 2017 Mohan Grewis
*/

#include "../include/my.h"

int		my_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	i += 1;
	return (i);
}

int		my_get_nbr(char *str, int *i)
{
  int	nb;

  nb = 0;
  while (str[*i] != '\0' && str[*i] != ' ' && (str[*i] <= '9' &&
   		str[*i] >= '0'))
    {
      nb *= 10;
      nb += str[*i] - '0';
      *i = *i + 1;
    }
  return (nb);
}

t_tetrimino		*first_line_handler(int fd, t_tetrimino *brick)
{
	char		*str;
	int			i;

	i = 0;
	brick = malloc(sizeof(t_tetrimino));
	str = get_next_line(fd);
	if (str == NULL)
		return (NULL);
	brick->width = my_get_nbr(str, &i);
	i = i + 1;
	brick->height = my_get_nbr(str, &i);
	i = i + 1;
	brick->color = my_get_nbr(str, &i);
	if (brick->width <= 0 || brick->height <= 0 || brick->color < 0)
		return (NULL);
	return (brick);
}

char		*name_collector(char *path)
{
	int		i;
	char	*name;

	i = 0;
	while (path[i] == '.')
		i += 1;
	name = malloc(sizeof(char) * (i + 2));
	i = 0;
	while (path[i] != '.')
	{
		name[i] = path[i];
		i += 1;
	}
	name[i] = '\0';
	return (name);
}

t_tetrimino		*parsing_tetrimino(char *path)
{
	char		*str;
	t_tetrimino	*brick;
	int			fd;
	int			i;

	i = 0;
	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (NULL);
	if ((brick = first_line_handler(fd, brick)) == NULL)
		return (NULL);
	brick->shape = malloc(sizeof(char *) * (brick->height + 1));
	while (i < brick->height)
	{
		str = get_next_line(fd);
		if (my_strlen(str) - space_counter(str) > brick->width)
			return (NULL);
		brick->shape[i] = str;
		i = i + 1;
	}
	brick->shape[i] = NULL;
	return (brick);
}
