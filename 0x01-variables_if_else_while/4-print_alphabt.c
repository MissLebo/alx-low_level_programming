#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 * Return: 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}
	putchae('\n');
	return (0);
}