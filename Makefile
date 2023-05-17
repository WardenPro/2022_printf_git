# E89 Pedagogical & Technical Lab
# project:     dprintf
# created on:  2022-12-05 - 10:02 +0100
# 1st author:  maxence.lenoble - maxence.lenoble
# description: Makefile

NAME	=	printf.a

SRCS	=	src/get_digit.c			\
		src/stu_puts.c			\
		src/nb_len.c			\
		src/dprintf.c			\
		src/stu_putchar.c		\
		src/base16.c			\
		src/stu_cputs.c			\
		src/dputs.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-W -Wall -Wextra -Werror -Iinclude/

LDFLAGS	+=

RM	=	rm -vf

CC	:=	gcc

ifdef RELEASE
CFLAGS += -O2
endif

ifdef DEBUG
CFLAGS += -g
endif

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

test:
	$(CC) $(CFLAGS) src/test_main.c printf.a -o dprintf

save:
	git status
	git add src/*.c include/*.h Makefile
	git commit -m "$(NAME) save"
	git push

exe:
	make re
	./dprintf
	make fclean

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re
