#include "holberton.h"
/**
 *_memcpy - function copies n bytes
 *@dest: pointer destiny
 *@src: pointer src
 *@n: integer of bytes
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ct;
	int j = 0;

	for (ct = 0; ct < n; ct++)
	{
		dest[j] = src[ct];
		j++;
	}
	return (dest);
}
