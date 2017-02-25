##
## Makefile for Makefile in /home/azriel/Epitech/PSU_2016_navy/
##
## Made by Mohan Grewis
## Login   <mohan.grewis@epitech.eu>
##
## Started on  Mon Jan 30 10:10:46 2017 Mohan Grewis
## Last update Sat Feb 25 16:28:28 2017 Thomas Dominé
##
CC		=	gcc

SRC		=	src/main.c	\
			src/display.c

OBJ		=	$(SRC:.c=.o)

NAME		=	tetris

LIBPRINTF	=	make -C ./lib/my_printf

LIBGNL		=	make -C ./lib/my_gnl

LIBBASE		=	make -C ./lib/base

all: $(NAME)

$(NAME): $(OBJ)
	$(LIBPRINTF)
	$(LIBBASE)
	$(LIBGNL)
	gcc -o $(NAME) $(OBJ) -L./lib -lprintf -lgnl -lbase -lncurses

clean:
	rm -f $(OBJ)
	$(LIBPRINTF) clean
	$(LIBBASE) clean
	$(LIBGNL) clean

fclean: clean
	rm -f $(NAME)
	rm -f lib/libprintf.a
	rm -f lib/libbase.a
	rm -f lib/libgnl.a

re: fclean all
