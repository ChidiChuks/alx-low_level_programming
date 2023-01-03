#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet - printing alphabets in a lowercase, followed by a new line.
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
