NAME := libft.a
SRCS =	ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c\
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c
B_SRCS=	ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \
		$(SRCS)

OBJS_DIR = objs/
OBJS = $(SRCS:.c=.o)
PATH_OBJS = $(addprefix $(OBJS_DIR),$(OBJS))
B_OBJS = $(B_SRCS:.c=.o)
PATH_B_OBJS = $(addprefix $(OBJS_DIR),$(B_OBJS))
HEAD := libft.h
CC := cc
CFLAGS := -Wall -Wextra -Werror

$(NAME): $(PATH_OBJS)
	@ar rc $(NAME) $(PATH_OBJS)
	@echo "libft done"

all: $(NAME)

$(OBJS_DIR)%.o: %.c
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(CFLAGS) -I $(HEAD) -c $< -o $@
	@echo "Compiling $(<)"

bonus: $(PATH_B_OBJS)
	@ar rc $(NAME) $(PATH_B_OBJS)
	@echo "libft bonus part was done"

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re