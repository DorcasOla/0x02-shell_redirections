#include "main.h"

/**
 * print_alphabet_x10 - is where the function task is
 * a function that prints 10 times the alphabet, in lowercase
 * followed by a new line
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char letter;
	int k = 1;
		while (k <= 10)
		{
			for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		k++;
		}
}
