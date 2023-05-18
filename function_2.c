#include "shell.h"
/**
 * _itoa - converts integer to character
 * @n: integer to convert
 * Return: character pointer
 */
char *_itoa(unsigned int n)
{
	int len = 0, i = 0;
	char *s;

	len = intlen(n);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	*s = '\0';
	while (n / 10)
	{
		s[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	s[i] = (n % 10) + '0';
	array_rev(s, len);
	s[i + 1] = '\0';
	return (s);
}

/**
*_isalpha - checks for alphabetic order
*@c: takes parameter c
*Return: 1 if c is a letter, 0 otherwise
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * array_rev - reverse array
 * @arr: array to reverse
 * @len: length of array
 * Return: void
 */
void array_rev(char *arr, int len)
{
	int i;
	char tmp;

	for (i = 0; i < (len / 2); i++)
	{
		tmp = arr[i];
		arr[i] = arr[(len - 1) - i];
		arr[(len - 1) - i] = tmp;
	}
}

/**
 * intlen - determines lenth of integer
 * @num: given integer
 * Return: lenth of integer
 */
int intlen(int num)
{


	int len = 0;

	while (num != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

/**
 * my_setenv - Set the value of an environment variable
 * @name: The name of the environment variable
 * @value: The value to set for the environment variable
 * @overwrite: Flag indicating whether to overwrite if the variable already exists
 *
 * Return: 0 on success, -1 on failure
 */
int my_setenv(const char *name __attribute__((unused)), const char *value __attribute__((unused)), int overwrite __attribute__((unused)))
{
	return (0);
}
