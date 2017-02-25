##
## Makefile for Makefile in /home/azriel/Epitech/CPE_2016_matchsitck/lib/base/
##
## Made by Thomas Dominé
## Login   <thomas.domine-@epitech.eu>
##
## Started on  Tue Feb 14 17:40:10 2017 Thomas Dominé
## Last update Sat Feb 25 16:24:56 2017 Thomas Dominé
##

CC	=	gcc

CFLAGS  =       -W -Wall -Wextra

SRC	=	my_get_nbr.c	\
		my_strlen.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libbase.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp libbase.a ../

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
