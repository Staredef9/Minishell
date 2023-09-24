CC = gcc

CFLAGS = -g -c -Wall -Wextra -Werror

all:prog
	

prog:main.o utils.o split2.o
		$(CC) main.o utils.o split2.o -lreadline -lhistory -o minishell 
utils.o:utils.c
		$(CC) $(CFLAGS) utils.c
split.o:split2.c
		$(CC) $(CFLAGS) split2.c
main.o:main.c
		$(CC) $(CFLAGS) main.c -lreadline -lhistory
clean:
		rm -rf minishell *.o
