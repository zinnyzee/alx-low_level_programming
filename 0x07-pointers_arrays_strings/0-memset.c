#include "main.h"
/**
* _memset -   fills memory with a constant byte
* @s: pointer block of memory to fill
* @b: value to set
* @n: bytes of the memory
* Return: dest
*/
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
	memory[index] = value;

	return (memory);
}


