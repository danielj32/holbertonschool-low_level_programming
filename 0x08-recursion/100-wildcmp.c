#include "holberton.h"
/**
 *wildcmp - function.
 *@s1: pointer 1
 *@s2: pointer 2
 *Return: 0
 */

int wildcmp(char *s1, char *s2)
{

	if (*s1 == 0 && *s2 == 0)
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
/*
*		else
*			return (wildcmp(s1 + 1, s2));
*
*     else if (*(s2 + 1) != '\0')
*	return (wildcmp(s1 + 1, s2));
*/
		else if ((wildcmp(s1, s2 + 1)) || (wildcmp(s1 + 1, s2)))
			return (1);
	}
	return (0);
}
