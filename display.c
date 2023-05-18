#include "shell.h"
/**
 * prompt  - display $
 */
void prompt(void)
{
	show("$");
}
/**
 * show_error - display error
 * @input: user input
 * @counter: simple shell count loop
 * @argv:argument vector
 * Return: void
 */
void show_error(char *input, int counter, char **argv)
{
	char *er;

	show(argv[0]);
	show(": ");
	er = _itoa(counter);
	show(er);
	free(er);
	show(":");
	show(input);
	show(":not found\n");
}
