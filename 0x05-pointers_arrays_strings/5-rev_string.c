#include "holberton.h"
/**
  *rev_string - prints a string, in reverse, followed by a new line.
  *@s: pointer to the string.
 */

void rev_string(char *s)
{
	int leg, cd;
char *beg, *ed, tmp;
	leg = _strlen(s);
	beg  = s;
	ed = s;

	for (cd = 0; cd < leg - 1; cd++)
		ed++;
	for (cd = 0; cd < leg / 2; cd++)
	{
		tmp   = *ed;
		*ed   = *beg;
		*beg = tmp;
		beg++;
		ed--;
	}
}

/**
 *_strlen - length of a string.
 *@s: pointer.
 *Return: ct.
 */

int _strlen(char *s)
{
	int ct = 0;

	while (*s != '\0')
	{
		ct++;
		s++;
	}
	return (ct);
}
