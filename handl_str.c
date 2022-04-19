#include "main.h"

/**
 * handl_str - writes the string to stdout
 *
 * @args: arguments
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 *
 * Return: length of string added
 */
int handl_str(va_list args, char *buf, unsigned int ibuf)
{
	char *str;
	unsigned int i;
	char nil[] = "(nil)";

	str = va_arg(args, char *);
	if (!str)
	{
		for (i = 0; nil[i]; i++)
			ibuf = handl_buf(buf, nil[i], ibuf);
		return (5);
	}
	for (i = 0; str[i]; i++)
		ibuf = handl_buf(buf, str[i], ibuf);
	return (i);
}
