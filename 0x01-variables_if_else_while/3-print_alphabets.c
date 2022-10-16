#include <stdio.h>

/**
 * main - prints alphabets in lower and upper case
 * Return: Always 0
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);

	putchar('\n');

	return (0);
}
