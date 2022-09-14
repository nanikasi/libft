NAME := libft.a
SRCS = $(wildcard ./ft_*.c)
BNSSRC = $(wildcard ./ft_lst*.c)
OBJS = $(SRCS:.c=.o)
BNSOBJS = $(BNSSRC:.c=.o)
HEAD := libft.h
CC := cc
CFLAGS := -Wall -Wextra -Werror

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

all: $(NAME)

.c.o:
	$(CC) -I $(HEAD) -c $< -o $@

bonus: $(BNSOBJS)
	ar rc $(NAME) $(BNSOBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -r $(NAME)

re: fclean all

.PHONY: all clean fclean re