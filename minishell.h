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

typedef enum	
{
	TOKEN_END = 0,
	TOKEN_SYMBOL,
	CHAR_WHITESPACE = ' ',
	CHAR_PIPE = '|',
	CHAR_REDIR_OUT = '>',
	CHAR_REDIR_IN = '<',
	CHAR_DOLLARSIGN = '$',
	CHAR_SING_QUOTE = '\'',
	CHAR_DOUB_QUOTE = '"',

} token_type;


typedef struct s_token
{
	
	token_type		type;
	char			*text;
	size_t			text_len;
	struct	s_token	*next;
	//struct s_token *next;
	//
} t_token;


//si forka per ogni comand line ottenuta dal parsing
typedef	struct s_cmd_line
{
	char				*cmd;
	t_token				*word;
	char				**args;
	struct	s_cmd_line	*next;
} t_command_line;
/*
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

*/
//
//lexer




#endif
