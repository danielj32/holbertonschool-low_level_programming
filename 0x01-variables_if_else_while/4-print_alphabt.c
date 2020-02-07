#include <stdio.h>
/**
 * main - lowercase
 *
 * Return: the value 0
 */

int main(void)
{
char g;
g = 'a';
for (; g <= 'z'; g++)
{
if (g == 'e' || g == 'q')
{
continue;
}
putchar(g);
}
putchar('\n');
return (0);
}
