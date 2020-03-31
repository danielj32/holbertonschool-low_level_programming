#include "holberton.h"
/**
 * read_textfile -  reads a text file and prints it to the POSIX.
 *@filename: is the file
 *@letters: contents of file
 * Return: largo2.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int ct;
	char *buffer;
	ssize_t largo;
	ssize_t largo2;

	if (filename == NULL)
		return (0);
	ct = open(filename, O_RDONLY);
	if (ct == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);

			if (buffer == NULL)
			{
				close(ct);
				return (0);
			}
			largo = read(ct, buffer, letters);
			close(ct);

			if (largo == -1)
			{
				free(buffer);
				return (0);
			}

			largo2 = write(STDOUT_FILENO, buffer, largo);
			free(buffer);

			if (largo != largo2)
			{
			return (0);
			}
			return (largo2);
}
