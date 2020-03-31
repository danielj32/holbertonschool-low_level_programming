#include "holberton.h"
/**
 * create_file - function create a file.
 *@filename: is the file.
 *@text_content: is the content of the file
 * Return: Always j.
 */

int create_file(const char *filename, char *text_content)
{
	int i, largo, writ;

	i = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (i == -1)
		return (-1);

	else if (text_content == NULL)
		text_content = "";
	largo = 0;

	while (text_content[largo] != '\0')
	{
		largo++;
	}
	writ = write(i, text_content, largo);
	if (writ == -1)
		return (-1);
	close(i);
	return (1);
}

