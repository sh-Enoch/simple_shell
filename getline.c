#include "shell.h"
/**
 * my_getline - Read input from user
 * Return:input
 * alx-school-- shell
 */
char *my_getline()
{
	int value, buffersize = BUFSIZE, READ;
	char  c = 0;
	char *buff = malloc(buffersize);

	if (buff == NULL)
	{
		free(buff);
		return (NULL);
	}

	for (value = 0; c != EOF && c != '\n'; value++)
	{
		fflush(stdin);
		READ = read(STDIN_FILENO, &c, 1);
		if (READ == 0)
		{
			free(buff);
			exit(EXIT_SUCCESS);
		}
		buff[value] = c;
		if (buff[0] == '\n')
		{
			free(buff);
			return ('\0');
		}
		if (value >= buffersize)
		{
			buff = (_realloc(buff, buffersize, buffersize + 1));
			if (buff == NULL)
			{
				return (NULL);
			}
		}
	}
	buff[value] = '\0';
	hashtag_handle(buff);
	return (buff);
}

/**
 * hashtag_handle - remove all after #
 * @buff: input
 * Return: Void
 */
void hashtag_handle(char *buff)
{
	int i;

	for (i = 0; buff[i] != '\0'; i++)
	{
		if (buff[i] == '#')
		{
			buff[i] = '\0';
			break;
		}
	}
}
