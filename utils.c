#include "minishell.h"


char	*ft_itoa(int i)
{
	static char	text[12];//NO STACK 
	int loc = 11;
	text[11] = 0;
	char neg = 1;
	if (i >= 0)
	{
		neg = 0;
		i = -i;
	}
	while(i)
	{
		text[--loc] = '0' - (i % 10);
		i /= 10;
	}
	if (loc == 11)
	{
		text[--loc] = '0';
	}
	if (neg)
	{
		text[--loc] = '-';
	}
	return(&text[loc]);
}




char	*ft_strcpy(char	*dest, char	*copy)
{
	int i = 0;

	while(copy[i])
	{
		dest[i] = copy[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int		ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while(str[i])
	{
		i++;
	}
	return i;
}




void	clean_init(char **argv, char **envp)
{
	printf("%s\n", argv[0]);
	printf("%s\n", envp[0]);
	return;
}



