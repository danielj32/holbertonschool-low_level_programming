#include <stdio.h>
/**
 * main - advanced
 *
 *Return: 0
 */

int main(void)

{
	int vari1;
	int vari2;
	int vari3;

	for (vari1 = '0'; vari1 <= '9'; vari1++)
	{
	for (vari2 = vari1 + 1; vari2 <= '9'; vari2++)
	{
	for (vari3 = vari2 + 1; vari3 <= '9'; vari3++)
	{
	putchar(vari1);
	putchar(vari2);
	putchar(vari3);
	if (vari1 != '7' || vari2 != '8' || vari3 != '9')
	putchar(',');
putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
