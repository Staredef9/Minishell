#include "minishell.h"


t_token	*parse_line(char *input)
{
	t_token	*parsed_line;
	char	*str_temp;
	char	*token;

	parsed_line = 0; 
	str_temp = malloc(sizeof(char) * (ft_strlen(input)) + 1);
	str_temp = strcpy(str_temp, input);
	//ora abbiamo una copia dell'input non parsata.
	//
	//iniziare a parsare con un ft_split 
	//dopo che si e' splittata 
	//si deve ciclare la char**
	//e distribuire nella lista 
	//di token 
	//dandogli un significato 

	// se si presentano determinate
	// condizioni 
	// si crea la condizione per 
	// comunicare la pipe o REDIRECT
	//
	//
	// devo capire come 
	// dividere tra tipo comando e 
	// tipo parola ecc ecc


}
