#include "main.h"


/**
 * print_alphabet - this is the function of the  task
 * it print the alphabet in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
