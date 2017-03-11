/*
** my_putnbr.c for printf in /home/mohan/PSU_2016_my_printf_bootstrap
** 
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
** 
** Started on  Thu Nov 10 17:38:02 2016 Mohan Grewis
** Last update Thu Nov 17 09:25:52 2016 Mohan Grewis
*/

#include <stdarg.h>
#include "my_struct.h"

static int	my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i  + 1;
    }
  return (i);
}

int	my_putnbr_base(unsigned int nb, char *str, int *rnb)
{
  int	size;

  size = my_strlen(str);
  if (nb / size > 0)
    my_putnbr_base(nb / size, str, rnb);
  my_putchar(str[nb % size], rnb);
  return (0);
}

void		call_my_putnbr_bi(va_list ap, int *rnb)
{
  unsigned int	nb;

  nb = va_arg(ap, unsigned int);
  my_putnbr_base(nb, "01", rnb);
}

void		call_my_putnbr_oct(va_list ap, int *rnb)
{
  unsigned int	nb;

  nb = va_arg(ap, unsigned int);
  my_putnbr_base(nb, "01234567", rnb);
}

void		call_my_putnbr_unsigned(va_list ap, int *rnb)
{
  unsigned int	nb;

  nb = va_arg(ap, unsigned int);
  my_putnbr_base(nb, "0123456789", rnb);
}
