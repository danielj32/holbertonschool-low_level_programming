#include "holberton.h"
/**
  *_strncpy - contents of one string into another string
  *@dest: pointer to desiny
  *@src: pointer two
  *@n: num of bytes.
  *Return: pt
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
