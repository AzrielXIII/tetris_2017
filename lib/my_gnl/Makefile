## Makefile for lib in /home/mohan/PSU_2016_my_printf_bootstrap/
##
## Made by Mohan Grewis
## Login   <mohan.grewis@epitech.eu>
##
## Started on  Thu Nov 10 18:14:21 2016 Mohan Grewis
##Last update Wed Feb 15 10:45:31 2017 Mohan Grewis
##
CC	=	gcc

SRCS	=	get_next_line.c

OBJS	=	$(SRCS:.c=.o)

NAME	=	../libgnl.a

all:	$NAME

$NAME: $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
