##
## Makefile for Makefile in /home/azriel/Epitech/PSU_2016_navy/
##
## Made by Mohan Grewis
## Login   <mohan.grewis@epitech.eu>
##
## Started on  Mon Jan 30 10:10:46 2017 Mohan Grewis
## Last update Mon Feb 27 13:22:44 2017 Mohan Grewis
##
CC			=	gcc

SRC			=	src/main.c		\
				src/parsing.c	\
				src/display.c	\
				src/parsing2.c

OBJ			=	$(SRC:.c=.o)

NAME		=	tetris

LIBPRINTF	=	make -C ./lib/my_printf

LIBGNL		=	make -C ./lib/my_gnl

all: $(NAME)

$(NAME): $(OBJ)
	$(LIBPRINTF)
	$(LIBGNL)
	gcc -o $(NAME) $(OBJ) -L./lib -lprintf -lgnl -lncurses

clean:
	rm -f $(OBJ)
	$(LIBPRINTF) clean
	$(LIBGNL) clean

fclean: clean
	rm -f $(NAME)
	rm -f lib/libprintf.a
	rm -f lib/libgnl.a

re: fclean all
