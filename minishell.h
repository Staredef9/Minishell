#ifndef	MINISHELL_H
# define MINISHELL_H

//mettere libft poi 
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //rimuovere poi
#include <readline/readline.h>
#include <readline/history.h>

//#define	SPACE 0
/*#define	PIPE 1
#define	REDIRECT_IN 2
#define REDIRECT_OUT 3
#define	D_REDIRECT_IN 4
#define	D_REDIRECT_OUT 5
#define	ENV_VAR	6
#define	DOLLARQUEST 7
#define	SINGLE_QUOTE 8
#define	DOUBLE_QUOTE 9
#define	INT 10
#define	FLOAT 11
#define	STRING 12
#define 
*/
/*
enum	type
{
	NONE,
	ARG,
	FILE_IN,
	HERE_DOC,
	FILE_OUT,
	FILE_OUT_SUR,
	OPEN_FILE,
	LIMITER,
	EXIT_FILE,
	EXIT_FILE_RET
};

*/
typedef struct s_token
{
	
//	enum			type;
	char			*content;
	struct	s_token	*next;
	//struct s_token *next;
	//
} t_token;


//si forka per ogni comand line ottenuta dal parsing
typedef	struct s_cmd_line
{
	char	*cmd;
	t_token	*word;
	char	**args;
	struct	s_cmd_line	*next;
} t_command_line;


typedef struct	s_tokenizer
{

	t_token	*token;
	

} t_tokenizer;


//PARSING:
//
//
//tokenizer
//
//split the command with an intelligent ft_split 
//assign each token its correct type 
//each token is given a struct 
//all the tokens are inside a tokenizer struct that collects them in the right order
//

void	tokenize(const char *input, const	t_tokenizer *tokenizer)
{
	char	*str = strdup(input);

	if (str == NULL)
	{
		printf("error\n");
		exit(1);
	}

	char	*token = strtok(str, input);


}


//
//lexer




#endif
