#include "holberton.h"
/**
 * main - main function.
 *@argc: integer
 *@argv: char
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int l1, f2, fr, fw;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	l1 = open(argv[1], O_RDONLY);
	f2  = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);

	if (f2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	do {
		fr = read(l1, buf, 1024);
		if (l1 == -1 && fr ==  -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		fw = write(f2, buf, fr);

		if (fw == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	} while (fr == 1024);
	if (close(l1) == -1 && close(f2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", l1);
		exit(100);
	}

	return (0);
}

