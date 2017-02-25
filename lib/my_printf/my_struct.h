/*
** my_struct.h for my_printf in /home/mohan/PSU_2016_my_printf
** 
** Made by Mohan Grewis
** Login   <mohan.grewis@epitech.eu>
** 
** Started on  Mon Nov 14 14:25:33 2016 Mohan Grewis
** Last update Sat Nov 19 14:03:57 2016 Mohan Grewis
*/

#ifndef MY_STRUCT_H_
# define MY_STRUCT_H_

#include <stdarg.h>

typedef struct		s_flags
{
  char			flags;
  void			(*ptrfonct)(va_list ap, int *rnb);
}			t_flags;

void call_my_putnbr(va_list ap, int *rnb);
void my_putchar(char c, int *rnb);
void call_my_putstr(va_list ap, int *rnb);
int my_putstr(char *str, int i, int *rnb);
void call_my_putchar(va_list ap, int *rnb);
void call_my_putper(va_list ap, int *rnb);
void call_my_putnbr_bi(va_list ap, int *rnb);
void call_my_putnbr_oct(va_list ap, int *rnb);
void call_my_putnbr_hexmaj(va_list ap, int *rnb);
void call_my_putnbr_hexmin(va_list ap, int *rnb);
int my_putnbr_base(unsigned int nb, char *str, int *rnb);
void call_my_putnbr_unsigned(va_list ap, int *rnb);
void call_my_putstr_oct(va_list ap, int *rnb);
void call_my_putnbr_pointer(va_list a, int *rnb);

#endif /* !MY_STRUCT_H_ */
