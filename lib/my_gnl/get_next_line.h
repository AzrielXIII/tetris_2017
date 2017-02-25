/*
** get_next_line.h for get_next_line in /home/mohan/Projet/Elementary_Programming_in_C/CPE_2016_getnextline
** 
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
** 
** Started on  Wed Jan  4 11:23:07 2017 Mohan Grewis
** Last update Wed Feb 15 10:16:33 2017 Mohan Grewis
*/

#ifndef _MY_GET_NEXT_LINE_
# define _MY_GET_NEXT_LINE_
# ifndef READ_SIZE
#  define READ_SIZE 1
# endif

typedef	struct	s_list
{
  char		c;
  int		lenght;
  struct s_list	*next;
}		t_list;

#endif
