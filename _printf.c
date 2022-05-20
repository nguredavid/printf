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
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	/*now we need to call the parser function*/

	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);

	return (printed_chars);
}
