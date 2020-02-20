#include "holberton.h"
/**
  *_strcat - concatenates two strings.
  *@dest: 1 string.
  *@src: 2 string.
  *Return: dest
  */

char *_strcat(char *dest, char *src)
{
	int largo = _strlen(dest);
	int ct;

	for (ct = 0; src[ct] != '\0'; ct++)
	{
		dest[largo] = src[ct];
		largo++;
	}
	dest[largo] = '\0';
	return (dest);

}
/**
  *_strlen - lenghth of dest
  *@src: pointer
  *Return: counter.
  */

int _strlen(char *src)
{
	int ct = 0;

		while (*src != '\0')
		{
			ct++;
			src++;
		}
		return (ct);
}
