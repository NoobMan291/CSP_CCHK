CC = gcc
CFLAGS = -g -std=c99 -Werror -Wall -Wextra -Wvla -fsanitize=address
CPPFLAGS = -Isrc/display
LDFLAGS = -fsanitize=address

OBJS = src/main.o \
	src/display/display.o

all: clean $(OBJS) 
	$(CC) $(CFLAGS) -o csp $(OBJS)

clean:
	$(RM) $(OBJS) csp*
