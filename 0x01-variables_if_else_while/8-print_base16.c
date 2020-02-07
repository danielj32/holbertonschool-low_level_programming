#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always the value 0
 */

int main(void)

{
int s = 48;
char l;
while (s < 58)
{
putchar(s);
s++;
}
l = 'a';

while (l <= 'f')
{
putchar(l);
l++;
}
putchar('\n');
return (0);
}
