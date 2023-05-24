#include "main.h"
/**
 * print_binary- prints the binary representation of a number.
 * @n: number that is printed.
 * Return: nothing
 */

void print_binary(unsigned long int n)
	{
		int f = 63;

		while (f >= 0)
		{
			if (n == 0)
			{
				_putchar(48);
				break;
			}
			if ((n >> f) == 0)
			{
				f--;
				continue;
		}
			else if ((n >> f) && 1)
			{
				_putchar(49);
			}
			else
			{
				_putchar(48);
			}
			f--;
		}
	}
