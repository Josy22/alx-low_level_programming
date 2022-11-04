#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
