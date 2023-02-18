#include <stdio.h>

/**
 * main - this program prints the alphabets in reverse
 * Return: 0
 */
int main(void)
{
	char al;

	for (al = 'z'; al >= 'a'; al--)
		putchar(al);

	putchar('\n');

	return (0);
}
