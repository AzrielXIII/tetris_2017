/*
** my_putstr.c for printf in /home/mohan/PSU_2016_my_printf_bootstrap
**
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
**
** Started on  Thu Nov 10 17:31:55 2016 Mohan Grewis
** Last update Sun Nov 20 10:47:40 2016 Mohan Grewis
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my_struct.h"

int my_putstr(char *str, int i, int *rnb)
{
  if (str[i] == '\0')
    return (0);
  my_putchar(str[i], rnb);
  my_putstr(str, i + 1, rnb);
  return (0);
}

void	call_my_putstr(va_list ap, int *rnb)
{
  char	*str;

  str = va_arg(ap, char*);
  if (str != NULL)
    my_putstr(str, 0, rnb);
  else
    my_putstr("(null)", 0, rnb);
}

void	norm(char c, int *rnb)
{
  if (c < 8)
    {
      my_putstr("\\00", 0, rnb);
      my_putnbr_base(c, "01234567", rnb);
    }
  else if (c < 64)
    {
      my_putstr("\\0", 0, rnb);
      my_putnbr_base(c, "01234567", rnb);
    }
  else
    {
      my_putchar('\\', rnb);
      my_putnbr_base(c, "01234567", rnb);
    }
}

void	call_my_putstr_oct(va_list ap, int *rnb)
{
  char	*str;
  int	i;

  i = 0;
  str = va_arg(ap, char *);
  if (str == NULL)
    my_putstr("(null)", 0, rnb);
  else
    {
      while (str[i] != '\0')
	{
	  if (str[i] < 32 || str[i] >= 127)
	    {
	      norm(str[i], rnb);
	    }
	  else
	    my_putchar(str[i], rnb);
	  i = i + 1;
	}
    }
}
