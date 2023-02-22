#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number whose last digit is printed
 * Return: value of last digit of @n
 */
int print_last_digit(int n)
{
	int ld = n % 10;

ld = ld < 0 ? -1 * ld : ld;
_putchar(ld + '0');
	return (0);
}
