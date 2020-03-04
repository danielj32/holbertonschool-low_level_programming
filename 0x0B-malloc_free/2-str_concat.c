#include "holberton.h"
/**
 *str_concat - concate two strings
 *@s1: string 1
 *@s2: string 2
 *Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	int c;
	int e;
	int d = 0;
	char *pt = NULL;

	if (s1 == NULL)
	s1 =  "";

	if (s2 == NULL)
	s2 = "";

	for (c = 0; s1[c]; c++)
	{

	}
	for (e = 0; s2[e]; e++)
	{

	}
	c++;
	pt = malloc(sizeof(char) * (c + e));

	if (pt == NULL)
		return (NULL);

	for (e = 0; s1[e]; e++)
	{
		pt[d] = s1[e];
		d++;
	}
	for (e = 0; s2[e]; e++)
	{
		pt[d] = s2[e];
		d++;
	}
	pt[d++] = '\0';
	return (pt);
}
