#include "shell.h"
/**
 * _prerror - prints custom error
 * @argv: programme name
 * @c: error count
 * @cmd: command
 * Return: void
 */
void _prerror(char **argv, int c, char **cmd)
{
	char *er = _itoa(c);

	show(argv[0]);
	show(" : ");
	show(er);
	show(": ");
	show(cmd[0]);
	show(": Illegal number: ");
	show(cmd[1]);
	show("\n");
	free(er);
}
