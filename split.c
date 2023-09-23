#include "minishell.h"

int	wdcount(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return i;
}

char	*ft_strlcpy(char *receive, char *pasted, int begin, int sign)
{
	int i;
	int j;

	i = 0;
	j = begin;

	while(j < sign)
	{
		receive[i] = pasted[j];
		i++;
		j++;
	}
	receive[i] = '\0';
	return receive;
}


char **ft_split(char *input, char separator)
{
	int i;
	int j;
	int	y;
	int	wordlen;
	int	str_num;
	char **to_return;

	str_num =	0;
	j =			0;
	y =			0;
	wordlen =	0;
	i = wdcount(input);
	while (j < i)
	{
		if(input[j] == separator)
			str_num++;
		j++;
	}
	if (str_num == 0)
	{
		printf("no separator match\n");
		return NULL;
	}
	j = 0;
	to_return = malloc(sizeof(char*) * (str_num + 2));
	to_return[str_num + 1] = NULL;
	while(j < i)
	{
		if(input[j] == separator)
		{
			if (y >= str_num)
			{
				printf("too many separators");
				return NULL;
			}
			to_return[y] = malloc(sizeof(char) * (j - wordlen + 1));
			ft_strlcpy(to_return[y], input, wordlen, j);
			printf("%s\n", to_return[y]);
			y++;
			wordlen = j;
		}
		j++;
	}
	//y++;
	to_return[y] = malloc(sizeof(char) * (i - wordlen + 1));
	ft_strlcpy(to_return[y], input, wordlen, i);
	if (!to_return[y+1])
		printf("%s\n", to_return[y]);
	return to_return;
}
