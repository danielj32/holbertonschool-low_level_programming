#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file.
 *@filename: is the file of text
 *@text_content: is the contents.
 * Return: Always 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, l, k;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);

	for (k = 0; text_content[k] != '\0'; k++)
		;
	l = write(file, text_content, k);
	if (l == -1)
		return (-1);

	close(file);
	return (1);
}

