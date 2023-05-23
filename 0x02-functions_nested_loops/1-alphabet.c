#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercases
 * prints a new line
 * Return: always return 0
 */

void print_alphabet(void)
{
	char alphabeth;

	for (alphabeth = 'a'; alphabeth <= 'z'; alphabeth++)
	{
		_putchar(alphabeth);
	}

	_putchar('\n');

}
