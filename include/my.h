/*
** my.h for matchstick in /home/mohan/Projet/Elementary_Programming_in_C/CPE_2016_matchstick/include/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Wed Feb 15 10:41:45 2017 Mohan Grewis
** Last update Sat Feb 25 16:26:07 2017 Thomas Dominé
*/

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <ncurses.h>
#include <sys/stat.h>
#include <sys/types.h>

void display();
int my_strlen(char *str);
int my_get_nbr(char *str);
int my_printf(char *str, ...);
char *get_next_line(const int fd);
