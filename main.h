#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct handler - Struct handler
 *
 * @spec - Given string
 * @f - handler function
 */
typedef struct handl
{
	char *specifier;
	int (*f)(va_list, char *, unsigned int);
} handl_t;

int _printf(const char *format, ...);
int (*get_handl_func(const char *, int))(va_list, char *, unsigned int);
int print_buf(char *, unsigned int);
unsigned int handl_buf(char *, char, unsigned int);
int handl_ch(va_list, char *, unsigned int);
int handl_str(va_list, char *, unsigned int);
int handl_int(va_list, char *, unsigned int);

#endif /* _MAIN_H_ */
