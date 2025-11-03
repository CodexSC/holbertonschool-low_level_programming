#include <stddef.h>

/**
 * _memset - Fill memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte to fill with
 * @n: number of bytes to fill
 *
 * Return: pointer to memory area @s
 */
void *_memset(void *s, int b, size_t n)
{
	unsigned char *ptr = (unsigned char *)s;
	unsigned char byte = (unsigned char)b;

	while (n > 0)
	{
		*ptr = byte;
		ptr++;
		n--;
	}

	return (s);
}
