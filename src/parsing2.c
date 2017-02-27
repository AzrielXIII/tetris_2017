/*
** parsing2.c for tetris in /home/mohan/Projet/Unix_System_Programmation/PSU_2016_tetris/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Mon Feb 27 11:04:55 2017 Mohan Grewis
** Last update Mon Feb 27 14:59:10 2017 Mohan Grewis
*/

#include "../include/my.h"

int		space_counter(char *str)
{
	int	i;
	int	a;

	a = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			a += 1;
		i += 1;
	}
	return (a);
}

char		*path_compressor(char *path, char *file)
{
	char	*str;
	int		i;
	int		a;

	str = malloc(sizeof(char) * (my_strlen(path) + my_strlen(file) + 2));
	i = 0;
	a = 0;
	while (path[a] != '\0')
	{
		str[i] = path[a];
		i += 1;
		a += 1;
	}
	str[i] = '/';
	i += 1;
	a = 0;
	while (file[a] != '\0')
	{
		str[i] = file[a];
		i += 1;
		a += 1;
	}
	str[i] = '\0';
	return (str);
}

t_list		*put_in_list(t_list *prev, char *name, t_tetrimino *brick)
{
	t_list	*element;

	element = malloc(sizeof(t_list));
	element->name = name_collector(name);
	element->brick = brick;
	element->prev = prev;
	return (element);
}

t_list		*next_creator(t_list *list)
{
	t_list	*next;

	next = NULL;
	while (list->prev != NULL)
	{
		list->next = next;
		next = list;
		list = list->prev;
	}
	list->next = next;
	return (list);
}

int		my_str_cmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
		i += 1;
	if (str1[i] == str2[i])
		return (1);
	else
		return (0);
}

t_list				*tetrimino_collector(char *path)
{
	DIR				*dir;
	struct dirent	*dirent;
	t_list	*list;

	list = NULL;
	if ((dir = opendir(path)) == NULL)
		return (NULL);
	while ((dirent = readdir(dir)) != NULL)
	{
		if (my_str_cmp(dirent->d_name, "..") == 0 &&
		my_str_cmp(dirent->d_name, ".") == 0)
		list = put_in_list(list, dirent->d_name,
			parsing_tetrimino(path_compressor(path, dirent->d_name)));
	}
	closedir(dir);
	if (list == NULL)
		return (NULL);
	list = next_creator(list);
	return (list);
}
