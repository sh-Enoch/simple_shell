#include "shell.h"

/**
 * parse_cmd - parse line of input
 * @input: user input to parse
 * Return: Array of char
 */
char **parse_cmd(char *input)
{
	char **tokens;
	char *token;
	int i, buffersize = BUFSIZE;

	if (input == NULL)
		return (NULL);
	tokens = malloc(sizeof(char *) * buffersize);
	if (!tokens)
	{
		perror("hsh");
		return (NULL);
	}

	token = _strtok(input, "\n ");
	for (i = 0; token; i++)
	{
		tokens[i] = token;
		token = _strtok(NULL, "\n ");
	}
	tokens[i] = NULL;

	return (tokens);
}

