/*
** my_strlen.c for my_strlen in /home/Thomasd/CPool_Day04
**
** Made by DOMINE Thomas
** Login   <Thomasd@epitech.net>
**
** Started on  Thu Oct  6 16:44:37 2016 DOMINE Thomas
** Last update Wed Feb 15 11:45:39 2017 Thomas Dominé
*/

#include "mylib.h"

int	my_strlen(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}
