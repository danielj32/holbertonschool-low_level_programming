#include "holberton.h"
/**
 *string_nconcat - allocates memory using malloc.
 *@s1: string 1
 *@s2: string 2
 *@n: bytes.
 *Return: ptr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	unsigned int ct1, ct2, ct3, ct4 = 0, ct12 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
	{
		s2 = "";
	}
	ct1 = _strlen(s1);
	ct2 = _strlen(s2);

	if  (n >= ct2)
		n = ct2;
	ct12 = ct1 + n + 1;
	ptr = malloc(sizeof(char) * (ct12));

	if  (ptr == NULL)
		return (NULL);

	for (ct3 = 0; ct3 < ct1; ct3++)
	{
		ptr[ct3] = s1[ct3];
	}
	for (ct4 = 0; ct4 < n; ct4++)
	{
		ptr[ct3 + ct4] = s2[ct4];
	}
	ptr[ct3 + ct4] = '\0';
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}

/**
 *_strlen - length of a string.
 *@s: pointer.
 *Return: ct.
 */

int _strlen(char *s)
{
	unsigned int ct = 0;

	while (*s != '\0')
	{
		ct++;
		s++;
	}
	return (ct);
}
