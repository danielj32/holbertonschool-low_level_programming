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
	char *pt = dest;

	if (dest == NULL)
		return (NULL);

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (pt);
}
