#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: Pointer block of memory to fill
 * Return: Void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0') /*if statement*/
	{
		_print_rev_recursion(s + 1); /*add s*/
		_putchar(*s); /*print s*/
	}
}
