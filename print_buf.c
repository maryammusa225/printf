#include "main.h"

/**
 * print_buf - prints the buffer of currently stored up bytes of characters
 * @buf: a pointer to the buffer
 * @n: number of bytes to print
 * Return: number of printed bytes
 */
int print_buf(char *buf, unsigned int n)
{
	return (write(1, buf, n));
}
