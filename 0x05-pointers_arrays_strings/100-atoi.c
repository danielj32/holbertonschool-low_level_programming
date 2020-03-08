#include "holberton.h"
/**
 *_atoi -string to integer.
 *@str: string
 *Return: o
 */

int _atoi(char *str)
{
	int o, ct, sign;

	ct = 0;
	o = 0;
	sign = 1;

	while (str[ct] != '\0')
	{
		if (str[ct] >= '0' && str[ct] <= '9')
		{
			o = o * 10 + (str[ct] - '0');
			if ((str[ct + 1] < '0') || (str[ct + 1] > '9'))
			{
				break;
			}
		}
		if (str[ct] == '-')
		{
			sign *= -1;
		}
		ct++;
		}
	o = o * sign;
	return (o);
}
