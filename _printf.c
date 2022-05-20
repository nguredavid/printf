#include "main.h"

/**
 * _printf - entry point to print string
 * @format: prints string to stdout
 * Return: returns 0 on success
 */
int _printf(const char *format, ...);
{
	int printed_chars;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	return (printed_chars);
}
