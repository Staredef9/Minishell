CC = gcc

CFLAGS = -c -Wall -Wextra -Werror

all:prog
	

prog:main.o
		$(CC) main.o -lreadline -lhistory -o minishell 

main.o:main.c
		$(CC) $(CFLAGS) main.c -lreadline -lhistory 
clean:
		rm -rf minishell *.o
