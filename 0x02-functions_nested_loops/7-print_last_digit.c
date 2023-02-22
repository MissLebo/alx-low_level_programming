#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @num: the number whose last digit is printed
 * Return: value of last digit of @num
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

last_digit = last_digit < 0 ? -1 * last_digit : last_digit;
_putchar(last_digit + '0');
	return (0);
}
