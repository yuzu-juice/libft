NAME	= libft.a
SRCS	= ft_isalpha.c

OBJS	= $(SRCS:.c=.o)
HEADERS	= libft.h
CC	= cc
CFLAGS	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $@ $(OBJS)
	@ranlib $@

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
