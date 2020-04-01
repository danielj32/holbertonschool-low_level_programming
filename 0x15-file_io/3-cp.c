#include "holberton.h"
/**
 * main - main function.
 *@argc: integer
 *@argv: char
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j, fir, fiw;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	i = open(argv[1], O_RDONLY);
	j  = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);

	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	do {
		fir = read(i, buffer, 1024);
		if (i == -1 || fir ==  -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		fiw = write(j, buffer, fir);

		if (fiw == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	} while (fir == 1024);
	if (close(i) == -1 && close(j) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", i);
		exit(100);
	}

	return (0);
}

