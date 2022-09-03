CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
SRCS	= ft_split.c ft_str.c rush02.c ft_putstr.c ft_dict.c ft_nbr_print.c
OBJS	= ${SRCS:.c=.o}
TARGET	= rush-02

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -c $(SRCS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)

re : fclean all

.PHONY: all clean fclean re
