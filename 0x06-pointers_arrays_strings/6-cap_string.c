#include "holberton.h"
/**
 * cap_string - capitalize the string
 * @str: pointer
 * Return: string
 */

char *cap_string(char *str)
{
	int z;
	int b;
	char s[] = {' ', '\t', '\n', ',', '.', ';', '!', '?', '"', '(', ')',
		'{', '}'};

	for (z = 0; str[z] != '\0'; z++)
	{
		if (str[0] < 123 && str[0] > 96)
			str[z] -= 32;

		for (b = 0; b < 13; b++)
		{
			if (str[z] == s[b] && (str[z + 1] < 123
						&& str[z + 1] > 96))
			{
				str[z + 1] -= 32;
			}
		}
	}
	return (str);
}

