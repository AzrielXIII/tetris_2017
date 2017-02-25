/*
** get_next_line.c for get_next_line in /home/mohan/Projet/Elementary_Programming_in_C/CPE_2016_getnextline
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Wed Jan  4 11:19:52 2017 Mohan Grewis
** Last update Wed Feb 15 10:24:49 2017 Mohan Grewis
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "get_next_line.h"

t_list		*reverse_and_malloc(t_list *list, char **str)
{
  t_list	*reverse_list;
  t_list	*elements;
  int		i;

  i = 0;
  reverse_list = NULL;
  while (list != NULL)
    {
      i = i + list->lenght;
      elements = malloc(sizeof(t_list));
      elements->c = list->c;
      elements->lenght = list->lenght;
      elements->next = reverse_list;
      reverse_list = elements;
      list = list->next;
    }
  *str = malloc(sizeof(char) * (i + 1));
  return (reverse_list);
}

char	*str_compactor(char *str, t_list *list)
{
  int	i;

  i = 0;
  while (list != NULL)
    {
      str[i] = list->c;
      list = list->next;
      i = i + 1;
    }
  str[i] = '\0';
  return (str);
}

t_list		*my_put_in_list(char c, t_list *list)
{
  t_list	*element;

  element = malloc(sizeof(t_list));
  element->c = c;
  element->lenght = 1;
  element->next = list;
  return (element);
}

char		*get_next_line(const int fd)
{
  t_list	*list;
  int		rr;
  char		c;
  char		*str;

  str = NULL;
  list = NULL;
  rr = read(fd, &c, 1);
  if (rr == 0)
    return (NULL);
  while (rr != 0 && c != '\n')
    {
      list = my_put_in_list(c, list);
      rr = read(fd, &c, 1);
    }
  return (str = str_compactor(str, reverse_and_malloc(list, &str)));
}
