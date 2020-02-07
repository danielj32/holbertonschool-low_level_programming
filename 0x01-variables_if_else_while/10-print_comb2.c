#include <stdio.h>
/**
 * main - print 00 to 99
 *
 * Return: always value 0
 */

int main(void)
{
	int j = 48;
int k = 48;

while  ((j < 58) && (k < 58))

{
putchar(j);
putchar(k);

if ((j == 57) && (k == 57))
{
putchar('\n');
j++;
k++;
}

else
{
putchar(44);
putchar(32);

if (k < 57)
{
k++;
}
else
{
k = 48;
j++;
}
}
}
return (0);
}
