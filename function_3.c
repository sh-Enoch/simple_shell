#include "shell.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _strlen - length of string
 * @s: takes parameter s
 * Return: length
 */
int _strlen(char *s)
{
	int k;

	k = 0;

	while (s[k] != '\0')
	{
		k++;
	}

	return (k);
}
/**
 * _atoi- converts string to integer
 * @s:parameter
 * Return: int
 */
int _atoi(char *s)
{
	int a, b, c, len, f, number;

	a = 0;
	b = 0;
	c = 0;
	len = 0;
	f = 0;
	number = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && f == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			number = s[a] - '0';
			if (b % 2)
				number = -number;
			c = c * 10 + number;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}
	if (f == 0)
		return (0);

	return (c);
}
/**
 * _puts - prints a string to stdout
 * @str:parameter str
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

