#include "holberton.h"
/**
  *_strncat - concatenates two strings
  *@dest: pointer to destiny.
  *@src: pointer to origin.
  *@n: number of bytes.
  *Return: dest.
  */

char *_strncat(char *dest, char *src, int n)
{
	char *pt  = dest +  _strlen(dest);

	while (*src != '\0' && n--)
		*pt++ = *src++;
	*pt = '\0';

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
