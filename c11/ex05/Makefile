CC = gcc
CFlAGS = -Wall -Wextra -Werror
NAME = do-op
OBJS = main.o job.o op.o

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $<

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
	
clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
