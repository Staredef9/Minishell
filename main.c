#include "minishell.h"

void	core_loop()
{
	char *input;

	while(1)
	{
		input = readline("Shellshock> ");

		if (input == NULL)
		{
			printf("\nGoodbye\n");
			break;
		}
		
		if (input[0] != '\0')
		{
			add_history(input);

			if(strcmp(input, "history") == 0)
			{
				HISTORY_STATE* hist_state = history_get_history_state();

				int i = 0;
				if(hist_state != NULL)
				{
					while(hist_state->entries[i])
					{
						printf("%d: %s\n", i + hist_state->offset - 3, hist_state->entries[i]->line);
						i++;
					}
				}
			}
			else 
				printf("You entered: %s\n", input);

		}
		free(input);
	}

}

int main()//int argc, char **argv, char **envp)
{
	using_history();
	core_loop();

}
