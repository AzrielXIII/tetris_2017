##
## Makefile for Makefile in /home/azriel/Epitech/PSU_2016_navy/
##
## Made by Mohan Grewis
## Login   <mohan.grewis@epitech.eu>
##
## Started on  Mon Jan 30 10:10:46 2017 Mohan Grewis
## Last update Sat Mar 18 22:22:42 2017 Thomas Dominé
##
CC			=	gcc

SRC			=	src/main.c					\
				src/term.c					\
				src/term2.c					\
				src/debug.c					\
				src/score.c					\
				src/analys.c				\
				src/debug2.c				\
				src/params.c				\
				src/params2.c				\
				src/params3.c				\
				src/parsing.c				\
				src/display.c				\
				src/params4.c				\
				src/params5.c				\
				src/parsing2.c				\
				src/parsing3.c				\
				src/tab_game.c				\
				src/tetrimino.c				\
				src/move_left.c				\
				src/move_right.c			\
				src/print_game.c			\
				src/tetrimino2.c			\
				src/color_init.c			\
				src/my_get_nbr.c			\
				src/delet_line.c			\
				src/print_next.c			\
				src/verif_char.c			\
				src/select_color.c			\
				src/verif_screen.c			\
				src/select_letter.c			\
				src/memories_game.c			\
				src/next_tetrimino.c		\
				src/down_tetrimino.c		\
				src/tab_integration.c		\
				src/miniaturisation.c		\
				src/identification_char.c	\
				src/tetrimino_coloration.c

OBJ			=	$(SRC:.c=.o)

NAME		=	tetris

LIBPRINTF	=	make -C ./lib/my_printf

LIBGNL		=	make -C ./lib/my_gnl

all: $(NAME)

$(NAME): $(OBJ)
	$(LIBPRINTF)
	$(LIBGNL)
	gcc -o $(NAME) $(OBJ) -L./lib -lprintf -lgnl -lncurses -g

clean:
	rm -f $(OBJ)
	$(LIBPRINTF) clean
	$(LIBGNL) clean

fclean: clean
	rm -f $(NAME)
	rm -f lib/libprintf.a
	rm -f lib/libgnl.a

re: fclean all
