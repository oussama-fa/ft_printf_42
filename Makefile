NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Wextra -Werror

RM = rm -rf

AR = ar rc

INCS = ft_printf.h

SRC = ft_printf.c ft_puthexa.c ft_putadress.c ft_putchar.c ft_putnbr.c ft_putunbr.c ft_putstr.c

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c $(INCS)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY : clean