#include "main.h"
#include "stdio.h"
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
int main(void)
{
    return (0);
}

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
}
