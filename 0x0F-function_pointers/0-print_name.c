#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function thats prints a name passed to i
 * @name: char to display to the stdout
 * @f: A pointer function
 *  Return: No return cause we've declared VOID as R_TYP
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f) /* if any is NULL */
		return;

	f(name);
}
