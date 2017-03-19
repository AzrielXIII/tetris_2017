/*
** term2.c for tetris in /home/mohan/Projet/Unix_System_Programmation/PSU_2016_tetris/src/
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Sat Mar 18 11:23:19 2017 Mohan Grewis
** Last update Sun Mar 19 11:02:18 2017 Mohan Grewis
*/

#include "../include/my.h"

void 	set_read(struct termios *old, struct termios *new)
{
	ioctl(0, TCGETS, new);
	ioctl(0, TCGETS, old);
	new->c_lflag &= ~ECHO;
	new->c_lflag &= ~ICANON;
	new->c_cc[VMIN] = 0;
	new->c_cc[VTIME] = 1;
	ioctl(0, TCSETS, new);
}

void 	unset_read(struct termios *old)
{
	ioctl(0, TCSETS, old);
}

void 		set_pav_num()
{
	char	*s;

	s = tigetstr("smkx");
	if (s == NULL)
	{
		write(2, "Impossible de trouver smkx\n", 27);
		exit(84);
	}
	else
	my_printf("%s", s);
}
