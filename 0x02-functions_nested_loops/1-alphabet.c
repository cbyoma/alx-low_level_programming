#include "main.h"

/**
 * print_alphabet - To print alphabet from a to z
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
