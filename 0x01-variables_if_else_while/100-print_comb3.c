#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int vr1;
	int vr2;

	for (vr1 = '0'; vr1 <= '9'; vr1++)
	{
		for (vr2 = vr1 + 1; vr2 <= '9'; vr2++)
		{
			putchar(vr1);
			putchar(vr2);
			if (vr1 != '8' || vr2 != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

return (0);

}
