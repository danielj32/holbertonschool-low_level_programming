#include "holberton.h"
/**
*_strcpy - copies the string.
*@dest: pointer 1
*@src: pointer2
*
*Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int it;

		for (it = 0; src[it] != '\0'; it++)
		{
			dest[it] = src[it];
		}
		dest[it] = '\0';
		return (dest);
}

