/*
** my_putnbr_base2.c for printf in /home/mohan/PSU_2016_my_printf
** 
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
** 
** Started on  Wed Nov 16 20:23:04 2016 Mohan Grewis
** Last update Sun Nov 20 10:28:34 2016 Mohan Grewis
*/

#include <stdarg.h>
#include "my_struct.h"

static int      my_strlen(char *str)
{
  int           i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i  + 1;
    }
  return (i);
}

void		call_my_putnbr_hexmaj(va_list ap, int *rnb)
{
  unsigned int	nb;

  nb = va_arg(ap, unsigned int);
  my_putnbr_base(nb, "0123456789ABCDEF", rnb);
}

void		call_my_putnbr_hexmin(va_list ap, int *rnb)
{
  unsigned int	nb;

  nb = va_arg(ap, unsigned int);
  my_putnbr_base(nb, "0123456789abcdef", rnb);
}

int     my_putnbr_base_pointer(long int nb, char *str, int *rnb)
{
  int   size;

  size = my_strlen(str);
  if (nb / size > 0)
    my_putnbr_base(nb / size, str, rnb);
  my_putchar(str[nb % size], rnb);
  return (0);
}

void		call_my_putnbr_pointer(va_list ap, int *rnb)
{
  void		*ptr;

  ptr = va_arg(ap, void*);
  my_putnbr_base_pointer((long int)ptr, "0123456789abcdef", rnb);
}
