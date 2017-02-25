/*
** my_putchar.c for Project-Master in /home/mohan/PSU_2016_my_printf_bootstrap
**
** Made by Mohan Grewis
** Login   <abel@epitech.eu>
**
** Started on  Thu Nov 10 17:30:34 2016 Mohan Grewis
** Last update Sun Nov 20 10:54:19 2016 Mohan Grewis
*/

#include <unistd.h>
#include <stdarg.h>

void	my_putchar(char c, int *rnb)
{
  write(1, &c, 1);
  *rnb = *rnb + 1;
}

void	call_my_putchar(va_list ap, int *rnb)
{
  char	c;

  c = va_arg(ap, int);
  my_putchar(c, rnb);
}

void	call_my_putper(va_list ap, int *rnb)
{
  my_putchar('%', rnb);
}
