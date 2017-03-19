/*
** buff_cleaner.c for tetris in /home/mohan/Projet/Unix_System_Programmation/PSU_2016_tetris/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Sun Mar 19 11:06:58 2017 Mohan Grewis
** Last update Sun Mar 19 11:09:05 2017 Mohan Grewis
*/

#include "../include/my.h"

void 	buff_cleaner(char buff[256])
{
	int	i;

	i = 0;
	while (i < 255)
	{
		buff[i] = '\0';
		i += 1;
	}
}
