#include "holberton.h"
/**
 *rot13 - mono-alphabetic substitution cipher.
 *@s: pointer string
 *Return: s.
 */
char *rot13(char *s)
{
	int t1;
	int t2;
	char *ax = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *ly = "abcdefghijklmnopqrstuvwxyz";

	for (t1 = 0; s[t1]; t1++)
	{
		for (t2 = 0; ax[t2]; t2++)
		{
			if (s[t1] == ax[t2])
			{
				s[t1] = ly[t2];
				break;
			}
		}
	}
	return (s);
}
