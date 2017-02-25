/*
** my_printf.c for my_printf in /home/mohan/PSU_2016_my_printf
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Wed Nov 16 13:19:57 2016 Mohan Grewis
** Last update Sun Nov 20 10:53:35 2016 Mohan Grewis
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my_struct.h"

t_flags	flags[] = {
  {'x', &call_my_putnbr_hexmin},
  {'X', &call_my_putnbr_hexmaj},
  {'o', &call_my_putnbr_oct},
  {'u', &call_my_putnbr_unsigned},
  {'b', &call_my_putnbr_bi},
  {'%', &call_my_putper},
  {'c', &call_my_putchar},
  {'s', &call_my_putstr},
  {'i', &call_my_putnbr},
  {'d', &call_my_putnbr},
  {'S', &call_my_putstr_oct},
  {'p', &call_my_putnbr_pointer},
  {'\0', NULL}
};

static int	check(char c, va_list ap, int *rnb)
{
  int		i;

  i = 0;
  while (flags[i].flags != '\0')
    {
      if (c == flags[i].flags)
	    {
	      (*flags[i].ptrfonct)(ap, rnb);
	      return (0);
	    }
      i = i + 1;
    }
  return (1);
}

int		my_printf(char *str, ...)
{
  va_list	ap;
  int		i;
  int		rnb;

  i = 0;
  rnb = 0;
  va_start(ap, str);
  while (str[i] != '\0')
    {
      if (str[i] == '%')
	{
	  if (check(str[i + 1], ap, &rnb) == 1)
	    {
	      my_putchar(str[i], &rnb);
	      my_putchar(str[i + 1], &rnb);
	    }
	  i = i + 1;
	}
      else
	my_putchar(str[i], &rnb);
      i = i + 1;
    }
  va_end(ap);
  return (rnb);
}
