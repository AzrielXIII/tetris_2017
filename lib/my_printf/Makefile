## Makefile for lib in /home/mohan/PSU_2016_my_printf_bootstrap/
##
## Made by Mohan Grewis
## Login   <mohan.grewis@epitech.eu>
##
## Started on  Thu Nov 10 18:14:21 2016 Mohan Grewis
##Last update Wed Feb 15 10:44:47 2017 Mohan Grewis
##
CC	=	gcc

SRCS	=	my_putchar.c		\
		my_putnbr.c		\
		my_putstr.c		\
		my_printf.c		\
		my_putnbr_base.c	\
		my_putnbr_base2.c

OBJS	=	$(SRCS:.c=.o)

NAME	=	../libprintf.a

all:	$NAME

$NAME: $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
