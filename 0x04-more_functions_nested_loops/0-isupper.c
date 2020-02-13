#include "holberton.h"
/**
  *_isupper - checks for uppercase character
  *@c: integer
  *Return: 1 or 0
  */

int _isupper(int c)
{

	if (c == 65)
	{
		return (1);
	}
	else if (c == 97)
	{
		return (0);
	}
	return (0);
}
