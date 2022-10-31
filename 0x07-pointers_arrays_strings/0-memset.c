#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: memory area
 * @b: byte
 * @n: number of bytes
 * Return: points int to s
 */

void *_memset(void *s, int b, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
