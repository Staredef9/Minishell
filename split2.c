#include "minishell.h"

int wdcount(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return i;
}

char *ft_strlcpy(char *receive, char *pasted, int begin, int sign)
{
    int i = 0;
    int j = begin;

    while (j < sign)
    {
        receive[i] = pasted[j];
        i++;
        j++;
    }
    receive[i] = '\0';
    return receive;
}

int count_non_empty_words(char *input, char separator)
{
    int count = 0;
    int i = 0;
    int wordlen = 0;

    while (input[i])
    {
        if (input[i] == separator)
        {
            if (i > wordlen)
            {
                count++;
            }
            wordlen = i + 1; // Update wordlen for the next word
        }
        i++;
    }

    // Check the last word
    if (i > wordlen)
    {
        count++;
    }

    return count;
}

char **ft_split(char *input, char separator)
{
    int i = wdcount(input);
    int j = 0;
    int y = 0;
    int wordlen = 0;
    int str_num = count_non_empty_words(input, separator);
    char **to_return = malloc(sizeof(char *) * (str_num + 1));

    for (j = 0; j < i; j++)
    {
        if (input[j] == separator)
        {
            if (j > wordlen)
            {
                to_return[y] = malloc(sizeof(char) * (j - wordlen + 1));
                ft_strlcpy(to_return[y], input, wordlen, j);
                printf("%s\n", to_return[y]);
				y++;
            }
            wordlen = j + 1; // Update wordlen for the next word
        }
    }

    // Handle the last word if it's not empty
    if (j > wordlen)
    {
        to_return[y] = malloc(sizeof(char) * (j - wordlen + 1));
        ft_strlcpy(to_return[y], input, wordlen, j);
        printf("%s\n", to_return[y]);
        y++;
    }

    to_return[y] = NULL;

    return to_return;
}

