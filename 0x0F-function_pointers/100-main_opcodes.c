#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *opcodeArray;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opcodeArray = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", opcodeArray[i]);
			break;
		}
		printf("%02hhx ", opcodeArray[i]);
	}

	return (0);
}
