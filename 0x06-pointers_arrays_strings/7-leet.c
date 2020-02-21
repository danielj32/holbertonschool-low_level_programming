#include "holberton.h"
/**
 *leet - encodes.
 *@s: string
 * Return: s.
 */

char *leet(char *s)
{
	int t1;
	int t2;
	char *ax = "aAeEoOtTlL";
	char *ly = "4433007711";

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


