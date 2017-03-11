/*
** my_putnbr.c for printf in /home/mohan/PSU_2016_my_printf_bootstrap
** 
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
** 
** Started on  Thu Nov 10 17:38:02 2016 Mohan Grewis
** Last update Wed Nov 16 19:42:46 2016 Mohan Grewis
*/

#include <stdarg.h>
#include "my_struct.h"

int	my_putnbr(int nb, int *rnb)
{
  if (nb < 0)
    {
      my_putchar('-', rnb);
      nb = nb * (-1);
    }
  if (nb / 10 > 0)
    my_putnbr(nb / 10, rnb);
  my_putchar((nb % 10) + '0', rnb);
  return (0);
}

void	call_my_putnbr(va_list ap, int *rnb)
{
  int	nb;

  nb = va_arg(ap, int);
  my_putnbr(nb, rnb);
}
