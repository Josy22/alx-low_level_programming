#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
/**
 * main - print the name of the program
 * @argc: Counts arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i = 1;
	int additive = 0;
	char *nope;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (; i < argc; i++)
	{
		additive = strtol(argv[i], &nope, 10);
		if (*nope == '\0')
		{
			sum += additive;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
