#include "3-calc.h"
/**
*main - entry
*@ac: int
*@av: arrays
*Return: 0
*/
int main(int ac, char *av[])
{
	char *str = NULL;
	int n1 = 0;
	int n2 = 0;
	int res = 0;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	str = av[2];
	n1 = atoi(av[1]);
	n2 = atoi(av[3]);
		res = get_op_func(str)(n1, n2);
		if (res == 0)
		{
			printf("Error\n");
			exit(99);
		}
		printf("%d\n", res);
		return (0);
}
