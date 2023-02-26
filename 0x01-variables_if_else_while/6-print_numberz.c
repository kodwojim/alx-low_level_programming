#include<stdio.h>

/**
 * main - Function to handle others
 *
 * Description: print 0-9 using putchar
 *              while using int variable
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII representation*/
		putchar(digit + '0');
		++digit;
	}
	putchar('\n');

	return (0);
}