NAME := libft.a
SRCS = $(wildcard ./ft_*.c)
OBJS = $(SRCS:.c=.o)
HEAD := libft.h
CC := cc
CFLAGS := -Wall -Wextra -Werror

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

all: $(NAME)

.c.o:
	$(CC) -I $(HEAD) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -r $(NAME)

re: fcrean all

.PHONY: all clean fclean re